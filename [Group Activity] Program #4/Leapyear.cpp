#include <iostream>

using namespace std;
int main(){

    //variable declaration
	int year;
	
	//input
	cout << "Enter the year: "; 
	cin >> year;
	
	//caculates if the given year is divisible by 4 and if it's equal to zero(0) the output will be a Leap year
	if(year % 4 == 0)
	{
		cout<<"This is a Leap year";
	}
	
	//if the year is not divisible by 4 it just simply outputs not a leap year
	else{
		cout<<"Not a leap year";
	}
	
	return 0;
}
