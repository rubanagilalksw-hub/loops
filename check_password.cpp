//Write a C++ program that prompts the user to enter a password up to three times. If the correct password is entered within three attempts, display "Access granted!". If all three attempts are
#include <iostream>
using namespace std;

int main() {
    int password;
    const int correctPassword = 1234;
    bool accessGranted = false;

    for (int attempt = 1; attempt <= 3; attempt++) {
        cout << "Attempt " << attempt << ": Enter password: ";
        cin >> password;

        if (password == correctPassword) {
            cout << "Access granted!" << endl;
            accessGranted = true;
            break; //  It is used to exit the loop
        } else {
            cout << "Incorrect password." << endl;
        }
    }

    if (!accessGranted) {
        cout << "Access denied. Too many attempts." << endl;
    }

    return 0;
}