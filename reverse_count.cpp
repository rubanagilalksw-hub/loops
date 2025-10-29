//Write a C++ program that takes a positive integer input from the user and prints all the integers from that number down to 1 in reverse order.
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = n; i > 0; i--) {
        cout << i << endl;
    }

    return 0;

}