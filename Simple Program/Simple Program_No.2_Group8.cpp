#include <iostream>


using namespace std;

int main() {
    double diameter, radius, area;
    const double PI = 3.141592653589793;
    
    
    cout<<"Enter the Diameter: ";cin>>diameter;
    
    radius = diameter / 2.0;
    
    area = PI * (radius * radius);
    
    cout<<"The Area is: "<<area;
    
    
 
    
    return 0;
}

