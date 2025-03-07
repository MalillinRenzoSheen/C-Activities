#include <iostream>

using namespace std;

int main() {
   
    for (int i = 0; i <= 5; i++) {
        cout << "Multiplyby " << i << ":\n";
        
       
        for (int m = 1; m <= 10; m++) {
            cout << i << " x " << m << " = " << i * m << endl;
        }

    }

    return 0;
}

