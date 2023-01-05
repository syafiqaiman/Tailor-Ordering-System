/* This is for Data Structures & Algorithms group project, due date: 14th June 2021, Monday 4.00pm
Group members: Adam Redza bin Shah Nazim (73294), Mohammad Syafiq Aiman bin Mohammad Suhaimi (73575), Amirul Haziq bin Khalid () */

#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
using namespace std;

void menu();
void addsale();
void viewsale();
void salessummary();
void exit();

int main()
{
	int choice;
	
	cout << "\tWelcome to New Modern Tailors.\n\n";
	cout << "Please select the options from the menu below.\n\n";
	
	do
	{
		cout << "1. Menu\n2. Add New Sale Order\n3. View Sale Order Detail\n4. View Daily Sales Summary\n5. Exit";
		cout << "\n\nYour choice: ";
		cin >> choice;
		
		switch(choice)
		{
			case 1: menu(); break;
			case 2: break;
			case 3: break;
			case 4: break;
			case 5: break;
		}
	}
	while(choice != 0);
}

void menu()
{
	system("cls");
	main(); //Redirect to main function
}
