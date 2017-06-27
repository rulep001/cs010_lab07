//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab7.cpp
/// @brief Lab 7
///
/// @author Ryan Ulep [rulep001@ucr.edu]
/// @date May 12, 2015
//  ================== END ASSESSMENT HEADER ===============
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;


int genRandInt(int smallest, int largest) {
    return (rand() % (largest - smallest + 1)) + smallest;
}
// random integer generator

int main()
{

    srand(time(0));
    int ex;

    cout << "Which exercise? ";
    cin >> ex;
    cout << endl;

    if (ex == 1) {
        int smallestNumber, largestNumber, randomNumber;
        cout << "Enter the smallest possible number: ";
        cin >> smallestNumber;
        cout << endl << "Enter the largest possible number: ";
        cin >> largestNumber;
        cout << endl;

        for (int i = 0; i < 3; i++) {
            randomNumber = genRandInt(smallestNumber, largestNumber);
            cout << "Random number: " << randomNumber << endl;
        }
        //random number generator
    }

    else if (ex == 2) {
        int flip;
        string keepOn = "yes";

        while (keepOn == "yes") {
            flip = (rand() % 2) + 1;

            if (flip == 2) {
                cout << "Flip: tails";
            }
            else {
                cout << "Flip: heads";
            }

            cout << endl << "Toss the coin again (yes/no)? ";
            cin >> keepOn;
            cout << endl;
        }
    }
    return 0;
}
