//Write a C++ program to print the Fibonacci series up to n terms.
#include <iostream>
using namespace std;

int main() {
    int n, first = 0, second = 1, next;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 0; i < n; i++) {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}