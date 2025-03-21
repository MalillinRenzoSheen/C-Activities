#include <iostream>
#include <string>
using namespace std;

int main()
{
	//variable declaration
	string name;
	string month;
	int day;
	int year;
	int age;

	
	
    //inputs name with space included
	cout << "Enter your name: ";
	getline(cin, name);
	
	//space below
	cout <<endl;
	
	//inputs
	cout << "==============================="<<endl;
	cout << "Enter Your Birthdate"<<endl;
	
	cout << "Enter Month: "; cin >> month;
	cout << "Enter Day: "; cin >> day;
	cout << "Enter Year: "; cin >> year;
	cout << "==============================="<<endl;
	cout <<endl;
	
	//the age will be shown if the current year is subtracted to birthyear
	age = 2025 - year;
	
	//output
	cout << "Your name is " << name << " and you're " << age << " years old.";
	cout <<endl;
	

	



	
	
	
	return 0;
}
