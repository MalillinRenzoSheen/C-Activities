#include<iostream>
using namespace std;

int main() 
{
    // Variables for weight
   // Using double for decimal precision 
    double grams, pounds;

    // Get input from user
    cout << "Enter weight in grams: ";
    cin >> grams;

    // Convert to pounds (1 gram = 0.00220462 pounds)
    pounds = grams * 0.00220462;
    
    // Display result
    cout << grams << " grams is equal to " << pounds << " pounds." << endl;

    return 0;
}
