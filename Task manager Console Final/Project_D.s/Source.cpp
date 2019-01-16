#include <iostream>
#include <string>
#include <list>
#include <algorithm>
#include "Task_fun.h"
using namespace std;
int main()
{
	int x, s;
	string name;
	Task_fun t;
	do {

		cout << "\t\t\t\t\t" << "Hello IN Task Manager " << endl << endl;
		cout << "\t\t\t\t\t" << "Choose Which you want to do " << endl << endl;
		cout << "\t\t\t\t\t" << "1 - To Add New Task " << endl << endl;
		cout << "\t\t\t\t\t" << "2 - To Delete Task " << endl << endl;
		cout << "\t\t\t\t\t" << "3 - To Update Task data" << endl << endl;
		cout << "\t\t\t\t\t" << "4 - To Submit A Task as Finished " << endl << endl;
		cout << "\t\t\t\t\t" << "5 - To Display The Tasks " << endl << endl;
		cout << "\t\t\t\t\t" << "6 - To Search About Task " << endl << endl;
		cout << "\t\t\t\t\t" << "7 - To Clear All Data From Your Task Manager"<< endl<<endl;
		cout << "\t\t\t\t\t" << "8 - To Exit From Task Manager" << endl << endl;


		cin >> x;

		if (x == 1)
		{
			t.Add();
			cout << "Press 1 to Return the previous menu to choose another operation" << endl;

			cin >> s;
			if (s == 1)
			{
				system("CLS");
			}
			
		}
		else if (x == 2)
		{
			t.Delete(name);
			cout << "Done !" << endl;
			cout << "Press 1 to Return the previous menu to choose another operation" << endl;
			cin >> s;
			if (s == 1)
			{
				system("CLS");
			}
		}
		else if (x == 3)
		{
			t.Update();
			cout << "Press 1 to Return the previous menu to choose another operation" << endl;
			
			cin >> s;
			if (s == 1)
			{
				system("CLS");
			}
			
		}
		else if (x == 4)
		{
			t.Submit();
			cout << "Press 1 to Return the previous menu to choose another operation" << endl;
			
			cin >> s;
			if (s == 1)
			{
				system("CLS");
			}
			
		}
		else if (x == 5)
		{
			t.display();
			cout << "Press 1 to Return the previous menu to choose another operation" << endl;
			cin >> s;
			if (s == 1)
			{
				system("CLS");
			}
			
		}
			else if (x == 6)
			{
				t.search_type();
				cout << "Press 1 to Return the previous menu to choose another operation" << endl;
				cin >> s;
				if (s == 1)
				{
					system("CLS");
				}
				
			}
			else if (x == 7)
			{
				t.Clear();
				cout << "Press 1 to Return the previous menu to choose another operation" << endl;
				cin >> s;
				if (s == 1)
				{
					system("CLS");
				}
				
			}

		
	} while (x!=8);
	
return 0;
}