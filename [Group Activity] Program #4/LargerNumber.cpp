#include <iostream>
using namespace std;

int main ()
{
	//variable declaration
	float num1, num2, num3;
	
	//inputs
	cout<<"Enter first number: ";
	cin>> num1;
	
	cout<<"Enter second number: ";
	cin>> num2;
	
	cout<<"Enter third number: ";
	cin>> num3;
	
	//if the num1 is greater than num2 and num3
	if(num1 > num2&&num3)
	{
		cout<<"The largest number is: "<<num1;
	}
	
	//if the num2 is greater than num3 and num1
    else if(num2 > num3&&num1)
	{
		cout<<"The largest number is: "<<num2;
	}
	//if the num3 is greater than num1 and num2
	else if(num3 > num1&&num2)
	{
		cout<<"The largest number is: "<<num3;
	}
	
	//if the given numbers are equal it will show "they are equal"
	else{
		cout<<"They are equal";
	}
	return 0;
}
