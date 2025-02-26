#include <iostream>
#include <string>
using namespace std;

int main()
{
	
	string name;
	string month;
	int day;
	int year;
	int age;

	
	

	cout << "Enter your name: ";
	getline(cin, name);
	
	cout <<endl;
	
	cout << "==============================="<<endl;
	cout << "Enter Your Birthdate"<<endl;
	
	cout << "Enter Month: "; cin >> month;
	cout << "Enter Day: "; cin >> day;
	cout << "Enter Year: "; cin >> year;
	cout << "==============================="<<endl;
	cout <<endl;
	
	age = 2025 - year;
	
	cout << "Your name is " << name << " and you're " << age << " years old.";
	cout <<endl;
	

	



	
	
	
	return 0;
}
