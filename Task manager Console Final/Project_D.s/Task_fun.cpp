#include "Task_fun.h"
#include <string>
#include <list>
#include <iostream>
#include <vector>
#include<fstream>
#include<iomanip>
#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;
bool c= true;
list <information> link;
list<information>::iterator it;
bool Task_fun::is_empty(std::ifstream& pFile)
{
	return pFile.peek() == std::ifstream::traits_type::eof();
}
void Task_fun::Load()
{
	information *L = new information;
	queue <string> q;
	ifstream file;
	string word;
	file.open("data.txt");
	if (!file.is_open())
	{
		cout << "erorr" << endl;
	}
	else
	{
		while (!file.eof() && word != " " && !is_empty(file))
		{
			file >> word;
			q.push(word);
		}
		
		file.close();
		while (!q.empty())
		{
			L->id = q.front();
			q.pop();
			L->NameOfTask = q.front();
			q.pop();
			L->date = q.front();
			q.pop();
			L->description = q.front();
			q.pop();
			L->finished = q.front();
			q.pop();
			if (q.size() == 1)
				q.pop();
			link.push_front(*L);
		}
	}
	
}
bool Task_fun::OnlyNom(string date) {
	for (int i = 0; i < date.length(); i++)
		if (!(date[i] >= 48 && date[i] <= 57))
			return false;
}
bool Task_fun::validDate(string &date) {
	if (date.length() > 10 || date.length() < 8)return false;
	if (!(date[0] >= 48 && date[0] <= 57 && date[1] >= 48 && date[1] <= 57))
		date.insert(0, "0");
	if (!(date[3] >= 48 && date[3] <= 57 && date[4] >= 48 && date[4] <= 57))
		date.insert(3, "0");
	string int_only = date;
	int_only.erase(2, 1);
	int_only.erase(4, 1);
	if (!OnlyNom(int_only))return false;
	date[2] = date[5] = '-';
	int day = ((date[0] - 48) * 10) + (date[1] - 48);
	int month = ((date[3] - 48) * 10) + (date[4] - 48);
	int year = (((date[6] - 48) * 1000) + ((date[7] - 48) * 100) + ((date[8] - 48) * 10) + (date[9] - 48));
	if (day > 31 || day < 1 || month>12 || month < 1 || year < 1979)
		return false;
	return true;
}
void Task_fun::Add() {
	system("CLS");
	
	information mydata;
	ofstream db;
	string s;
	bool check = false;
	db.open("data.txt", ios::out | ios::app);
	cout << "Enter task iD : " << endl;
	cin.ignore();
	getline(cin, mydata.id);
		if (OnlyNom(mydata.id))
		{
			while (checkID(mydata.id))
			{
				cout << "Invalid ID" << endl;
				getline(cin, mydata.id);
				check = true;
				if (!checkID(mydata.id))
					db << mydata.id << setw(15);
			}
			if (!check)
				db << mydata.id << setw(15);
		}
		else
		{
			cout << "Invalid Type" << endl;
			cout << "Enter new data" << endl;
			cin.ignore(0);
			getline(cin, mydata.id);
			while (checkID(mydata.id))
			{
				cout << "Invalid ID" << endl;
				getline(cin, mydata.id);
				check = true;
				if (!checkID(mydata.id))
					db << mydata.id << setw(15);
			}
			if (!check)
				db << mydata.id << setw(15);
		}
	cout << "Enter task name : " << endl;
	cin.ignore(0);
	getline(cin, mydata.NameOfTask);
	db << mydata.NameOfTask << setw(15);
	cout << "Enter task date : " << endl;
	cin.ignore(0);
	bool checkdate = false;
	getline(cin, mydata.date);
	while (!validDate(mydata.date))
	{
		cout << "Invalid Date" << endl;
		getline(cin, mydata.date);
		checkdate = true;
		if (validDate(mydata.date))
			db << mydata.date << setw(15);

	}
	if (!checkdate)
		db << mydata.date << setw(15);
	cout << "Enter task description : " << endl;
	cin.ignore(0);
	getline(cin, mydata.description);
	db << mydata.description << setw(15);
	cout << "Enter Task Submitted : Finish Or Not Finish" << endl;
	cin.ignore(0);
	getline(cin, mydata.finished);
	db << mydata.finished << setw(15) << endl;
	link.push_front(mydata);
	db.close();
}
void Task_fun::display() {
	Load();
	system("CLS");
	while (!link.empty())
	{

		cout << link.front().id <<"\t" <<link.front().NameOfTask << "\t" << link.front().date  << "\t" <<link.front().description <<"\t"<< link.front().finished << endl;
		link.pop_front();
	}
}

bool Task_fun::checkID(string name)
{
	Load();
	bool c = true;
	list<information>::iterator it;
	for (it = link.begin(); it != link.end(); it++)
	{
		if (it->id == name)
		{
			return true;
			c = false;
			break;
		}
	}
	if (c)
		return false;
}
void Task_fun::searchName(string name)
{
	Load();
	bool c = true;
	
	for (it = link.begin(); it != link.end(); it++)
	{
		if (it->NameOfTask == name)
		{
			cout << "ID : "<< it->id << endl;
			
			cout <<"Date : " << it->date << endl;
			cout << "Description : " << it->description << endl;
			cout << "Finished : " << it->finished << endl;
			c = false;
			break;
		}
	}
	if (c)

	{
		cout << "not found" << endl;
	}
/*	system("CLS");
	cout << "Enter Task You want to search " << endl;
	cin >> name;
	ifstream file;
	int offset;
	string line ;
	bool check = true;
	file.open("data.txt");
	ofstream out("test.txt");
	if (file.is_open())
	{
		while (!file.eof())
		{
			getline(file, line);
			
			if ((offset = line.find(name, 0)) != string::npos)
			{
				cout << line << endl;
				check = false;
			}

		}
		if (check)
			cout << "Task Not Found" << endl;
		file.close();
	}
	else
	{
		cout << "Not Found " << endl;

	}
	*/
}
void Task_fun::searchID(string name)
{
	Load();
	
	list<information>::iterator it;
	for (it = link.begin(); it != link.end(); it++)
	{
		if (it->id == name)
		{
			
			cout << "NAME : " << it->NameOfTask << endl;
			cout << "Date : " << it->date << endl;
			cout << "Description : " << it->description << endl;
			cout << "Finished : " << it->finished << endl;
			c = false;
			break;
		}
	}
	if (c)

	{
		cout << "not exict" << endl;
	}
}
void Task_fun::searchDate(string name)
{
	Load();
	bool c = true;
	list<information>::iterator it;
	for (it = link.begin(); it != link.end(); it++)
	{
		if (it->date == name)
		{
			cout << "ID : " << it->id << endl;
			cout << "NAME : " << it->NameOfTask << endl;
			
			cout << "Description : " << it->description << endl;
			cout << "Finished : " << it->finished << endl;
			c = false;
			break;
		}
	}
	if (c)

	{
		cout << "not found" << endl;
	}
}
void Task_fun::Clear()
{
	system("CLS");
	Load();
	std::ofstream ofs("data.txt", std::ios::out | std::ios::trunc);
	while (!link.empty())
	{
		link.pop_front();
	}
	
	if(link.empty())
	cout << "Well Done !" << endl;
	else
	{
		cout << "NO" << endl;
	}
}

void Task_fun::Delete(string name)
{
	system("CLS");
	cout << "Enter Task You want to Delete " << endl;
	cin >> name;
	Load();
	for (it = link.begin(); it != link.end(); it++)
	{
		if (it->NameOfTask == name)
		{
			link.erase(it);
			c = false;
			break;
		}
	}
	insert();
}
void Task_fun::Update()
{
	system("CLS");
	Load();
	string name;
	bool check = false;
	information mydata;
		cout << "Enter Name Of Task you want to update : " << endl;
		cin >> name;
		for (it = link.begin(); it != link.end(); it++)
		{
			if (it->NameOfTask == name)
			{
				link.erase(it);
				cout << "Enter New Data" << endl;
				Load();
				Add();
			}
		}
		insert();
		cout << "Well Done !" << endl;
}
void Task_fun::search_type()
{
	system("CLS");
	string k;
	int y;
	cout << "Choose type of search you want to execute :" << endl;
	cout << "1-Search by name" << endl;
	cout << "2-Search by ID" << endl;
	cout << "3-Search by Date" << endl;
	cout << "4-Search by Finish" << endl;
	cin >> y;
	if (y == 1) {
		cout << "Enter Name Of Task Which You Want to Search on :" << endl;
		cin >> k;
		searchName(k);
	}
	else if (y == 2) {
		cout << "Enter ID Of Task Which You Want to Search on :" << endl;
		cin >> k;
		searchID(k);
	}
	else if (y == 3) {
		cout << "Enter Date Of Task Which You Want to Search on :" << endl;
		cin >> k;
		searchDate(k);
	}
	else if (y == 4)
	{
		cout << "Enter Finished Of Task Which You Want to Search on :" << endl;
		cin >> k;
		searchFinished(k);
	}
}

void Task_fun::insert()
{
	ifstream file;
	int offset;
	string line;
	bool check = true;
	file.open("data.txt");
	ofstream db;
	db.open("test.txt");
	if (file.is_open())
	{
			while (!link.empty())
			{
				db << link.front().id << setw(15);
				db << link.front().NameOfTask << setw(15);
				db << link.front().date << setw(15);
				db << link.front().description << setw(15);
				db << link.front().finished << endl;
				link.pop_front();
				
			}
	}
	else
	{
		cout << "Not Found " << endl;
	}

	file.close();
	db.close();
	remove("data.txt");
	rename("test.txt", "data.txt");

}
void Task_fun::Submit()
{
	system("CLS");
	string name;
	Load();
	cout << "Enter The Task Finished" << endl;
	cin >> name;
	for (it = link.begin(); it != link.end(); it++)
	{
		if (it->NameOfTask == name)
		{
			it->finished = "Finished";
			cout << it->finished << endl;
			break;
		}
	}
	insert();
}
void Task_fun::searchFinished(string name)
{
	toupper(name[0]);
	Load();

	for (it = link.begin(); it != link.end(); it++)
	{
		if (it->finished == name)
		{
			cout << "ID : " << it->id << endl;
			cout << "NAME : " << it->NameOfTask << endl;
			cout << "Date : " << it->date << endl;
			cout << "Description : " << it->description << endl << endl;

			c = false;

		}
	}
	if (c)

	{
		cout << "not found" << endl;
	}
}

Task_fun::Task_fun()
{
}


Task_fun::~Task_fun()
{
}
