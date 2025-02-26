#include <iostream>
using namespace std;

int main()
{
	
	double speed, time, dist;
	
	cout<<"Speed Calculator "<<endl;
	cout<<"Enter Distance (km): ";cin>>dist;
	cout<<"Enter Time (hr): ";cin>>time;
	
	speed = dist / time;
	
	cout<<"The Speed of the Car is: "<<speed<<" km/h.";
	
	
	
	
	
	return 0;
}
