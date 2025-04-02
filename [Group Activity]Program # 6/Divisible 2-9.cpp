#include <iostream>
using namespace std;

int main() 
{
    int number, originalNumber, digitSum = 0, remainder;

    // Input a number
    cout << "Enter a positive number: ";
    cin >> number;

    originalNumber = number;

    // Calculate sum of digits
    do {
        remainder = number % 10;
        digitSum += remainder;
        number /= 10;
    } while (number > 0);

    // Display sum of digits
    cout << "\nThe sum of the digits is : " << digitSum << endl;

    // Divisibility tests
    cout << endl;

    // Divisibility by 2
    if (originalNumber % 2 == 0)
        cout << originalNumber << "  is  divisible by 2" << endl;
    else
        cout << originalNumber << "  is not divisible by 2" << endl;

    // Divisibility by 3
    if (originalNumber % 3 == 0)
        cout << originalNumber << "  is  divisible by 3" << endl;
    else
        cout << originalNumber << "  is not divisible by 3" << endl;

    // Divisibility by 4
    if (originalNumber % 4 == 0)
        cout << originalNumber << "  is  divisible by 4" << endl;
    else
        cout << originalNumber << "  is not divisible by 4" << endl;

    // Divisibility by 5
    if (originalNumber % 5 == 0)
        cout << originalNumber << "  is  divisible by 5" << endl;
    else
        cout << originalNumber << "  is not divisible by 5" << endl;

    // Divisibility by 6
    if (originalNumber % 6 == 0)
        cout << originalNumber << "  is  divisible by 6" << endl;
    else
        cout << originalNumber << "  is not divisible by 6" << endl;

    // Divisibility by 7
    if (originalNumber % 7 == 0)
        cout << originalNumber << "  is  divisible by 7" << endl;
    else
        cout << originalNumber << "  is not divisible by 7" << endl;

    // Divisibility by 8
    if (originalNumber % 8 == 0)
        cout << originalNumber << "  is  divisible by 8" << endl;
    else
        cout << originalNumber << "  is not divisible by 8" << endl;

    // Divisibility by 9
    if (originalNumber % 9 == 0)
        cout << originalNumber << "  is  divisible by 9" << endl;
    else
        cout << originalNumber << "  is not divisible by 9" << endl;

    return 0;
}
