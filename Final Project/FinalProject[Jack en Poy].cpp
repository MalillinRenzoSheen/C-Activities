#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string getchoiceName(int choice) {
    switch(choice) {
        case 1: return "ROCK!";
        case 2: return "PAPER!";
        case 3: return "SCISSORS!";
        default: return "UNKNOWN!";
    }
}

int main() {
    int userchoice, cpchoice;
    int userscore = 0, cpscore = 0;
    char again;

do{
    

    srand(time(0)); 
    cout <<"========= NOW YOU ARE PLAYING =========\n";
    cout << "==========  JACK EN POY  ==============\n";
    cout << "===== IT'S YOU VERSUS THE COMPUTER ====\n";


    while (userscore < 3 && cpscore < 3) {
        cout << "\nSCORE -> YOU: " << userscore << " | COMPUTER: " << cpscore << endl;
        cout << "1 = ROCK! | 2 = PAPER! | 3 = SCISSORS!\n";
        cout << "ENTER YOUR CHOICE! (1-3): ";
        cin >> userchoice;

        if (userchoice < 1 || userchoice > 3) {
            cout << "CAN'T YOU READ?! AGAIN!!!\n";
            continue;
        }

        cpchoice = rand() % 3 + 1;

        cout << "YOU CHOSE: " << getchoiceName(userchoice) << endl;
        cout << "COMPUTER CHOICE: " << getchoiceName(cpchoice) << endl;

        if (userchoice == cpchoice) {
            cout << "IT'S A DRAW!!!\n";
            cout << "C'MON, YOU'RE BETTER THAN THIS!!!\n";

        } else if ((userchoice == 1 && cpchoice == 3) ||
                   (userchoice == 2 && cpchoice == 1) ||
                   (userchoice == 3 && cpchoice == 2)) {
            cout << "YOU WIN THIS ROUND!!!\n";
            userscore++;
        } else {
            cout << "CAN'T BEAT A COMPUTER?!\n";
            cpscore++;
        }
    }

    cout << "\n=== FINAL DESTINATION!!! ===\n";
    cout << "YOU: " << userscore << " | COMPUTER: " << cpscore << endl;

    if (userscore == 3) {
        cout << "AHH YOU THINK YOU'RE GOOD HUH?!\n";
    } else {
        cout << "WAHHAHAHAHAHHA A FAILURE!!!\n";
    }
            cout << "\nWANNA TRY AGAIN? (Y/N): ";
        cin >> again;

    } while (again == 'Y' || again == 'y');

    cout << "HA! COWARD!\n";
    return 0;
}
