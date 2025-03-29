#include <iostream>
#include <string>
using namespace std;

int main()
{
	
	float num1, num2, sum, dif, prod, quo;
	int m_num1;
	string name;
	
	cout<<"Enter the name of the user: ";
	cin>>name;
	cout<<"Hello "<<name<<endl;
	
	
	
	
	
	
	
	
	cout<<"Enter two numbers "<<endl;
	cout<<"Enter 1st number: ";
	cin>>num1;
	cout<<"Enter 2nd number: ";
	cin>>num2;
	
	sum = num1 + num2;
	cout<<"The sum of two numbers is: "<<sum<<endl;
	dif = num1 - num2;
	cout<<"The difference of two numbers is: "<<dif<<endl;
	prod = num1 * num2;
	cout<<"The product of two numbers is: "<<prod<<endl;
	quo = num1 / num2;
	cout<<"The quotient of two numbers is : "<<quo<<endl;
	
	cout<<"The modulus of first number is: "<<m_num1%2<<endl;
	
	
	return 0;
}
