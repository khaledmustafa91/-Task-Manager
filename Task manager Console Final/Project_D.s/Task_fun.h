
#pragma once
#include <iostream>
#include <string>
#include <list>
#include <fstream>
using namespace std;
class information
{
public:
	string NameOfTask, date, description , finished;
	string id;

};


class Task_fun
{
public:
	
	Task_fun();
	void Add();
	void display();
	void searchName(string);
	void searchID(string);
	bool checkID(string);
	void searchDate(string);
	void Clear();
	
	void Delete(string);
	void Update();
	void Submit();
	void Load();
	void search_type();
	void insert();
	bool is_empty(std::ifstream& pFile);
	bool OnlyNom(string);
	bool validDate(string &);
	void searchFinished(string);
	~Task_fun();
};

