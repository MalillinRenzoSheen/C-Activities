 #include <iostream>
using namespace std;

int main()
{
	
	
	cout<<"*********************************************"<<endl;
	cout<<"*********************************************"<<endl;
	cout<<"********* WELCOME TO THE CALCULATOR *********"<<endl;
	cout<<"*********************************************"<<endl;
	cout<<"*********************************************"<<endl<<endl;
	
	//variable declaration
	char op, yn;
	float num1, num2;
	float sum, sub, mult, div;
	
	//do while loop
	do{
	
	//sign operators
	cout<<"Enter Operator [+, -, *, /]: ";
	cin>>op;
	
	//if statement if the op is equal to char variable "+"
	if(op == '+')
	
	{
		cout<<"Enter First Number:";
		cin>>num1;
		
		cout<<"Enter Second Number:";
		cin>>num2;
		cout<<endl;
		
		
		//sum calculation of num1 and num2
		sum = num1 + num2;
		cout<<"The sum is: "<<sum<<endl<<endl;
		
		cout<<"Restart?[Y/N]: ";
		cin>>yn;
				
	}
	
	//if statement if the op is equal to char variable "-"
	else if(op == '-')
	
	{
		cout<<"Enter First Number:";
		cin>>num1;
		
		cout<<"Enter Second Number:";
		cin>>num2;
		cout<<endl;
		
		//subtraction calculation of num1 and num2
		sub = num1 - num2;
		cout<<"The subtraction is: "<<sub<<endl<<endl;
		
		cout<<"Restart?[Y/N]: ";
		cin>>yn;
				
	}
	//if statement if the op is equal to char variable "*"
	else if(op == '*')
	
	{
		cout<<"Enter First Number:";
		cin>>num1;
		
		cout<<"Enter Second Number:";
		cin>>num2;
		cout<<endl;
		//multiplication calculation of num1 and num2
		mult = num1 * num2;
		cout<<"The multiplication is: "<<mult<<endl<<endl;
				
		cout<<"Restart?[Y/N]: ";
		cin>>yn;		
	}
	//if statement if the op is equal to char variable "/"
	else if(op == '/')
	
	{
		cout<<"Enter First Number:";
		cin>>num1;
		
		cout<<"Enter Second Number:";
		cin>>num2;
		cout<<endl;
		//divition calculation of num1 and num2
		div = num1 / num2;
		cout<<"The multiplication is: "<<div<<endl<<endl;
		
		cout<<"Restart?[Y/N]: ";
		cin>>yn;
				
	}
	
	//if the op is not an sign operator 
	else
	{
		cout << "Not even an operator!!";
	}
	
}
//If the yn is equal to Y or y it restarts
while(yn == 'Y'|| yn == 'y');
	
	
	
	return 0;
}
