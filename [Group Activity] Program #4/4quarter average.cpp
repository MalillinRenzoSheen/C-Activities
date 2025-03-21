#include <iostream>

using namespace std;

int main()
{
	//variable declaration
	float Q1, Q2, Q3, Q4;
	float GEN_ave;
	
	//inputs
	cout<<"Enter 1st quarter: ";
	cin>>Q1;
	cout<<"Enter 2nd quarter: ";
	cin>>Q2;
	cout<<"Enter 3rd quarter: ";
	cin>>Q3;
	cout<<"Enter 4th quarter: ";
	cin>>Q4;
	
	//calculation to get the general average
	GEN_ave = (Q1 + Q2 + Q3 + Q4) / 4;
	
	//the output of the calculation
	cout<<"Your General average is: "<<GEN_ave;

	return 0;
}
