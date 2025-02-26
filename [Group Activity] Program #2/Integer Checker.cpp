#include <iostream>
using namespace std;

int main()
{
	//declares a variable
	int num;
	
	//integer input
	cout << "Enter integer: "; cin >> num;
	
	//modulo computation
	num % 2;
	
	
	cout << "Your integer is: ";
	
	
	//if statement that if the num is = to 0 it is an even number
	if( num == 0)
	{
		cout << endl;
		cout << "Even";
		cout <<endl;
		
		//And it detects if it's zero
		cout << "Zero";
		cout <<endl;
		
		//nested if statement that if the number is greater than zero it is a positive integer
		if(num > 0)
		{
			cout << "Positive";
		}
		
		//nested else if, if the num is less than zero it's an negative number
		else if(num < 0){
			cout << "Negative";
		}
		
	}
	
    // and else statement that if the num is NOT EQUAL to zero it is an odd number
	else{
		cout << endl;
		cout << "Odd";
		cout << endl;
		
		//nested if statement that if the number is greater than zero it is a positive integer
		if(num > 0)
		{
			cout << "Positive";
		}
		
		//nested else if, if the num is less than zero it's an negative number
		else if (num < 0){
			cout << "Negative";
		}
	}
	

	
	
	return 0;
}
