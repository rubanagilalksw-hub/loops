//Write a program to calculate factorial of numbers from i to n.
#include <iostream>
using namespace std;
int main(){
    int n;
    int i=1;
    int fact=1;

    cout << "Enter a positive integer: ";
    cin >> n;

    while(i <= n){
        fact = fact * i;
        i++;
    }

    cout << "Factorial of " << n << " = " << fact << endl;

    return 0;
}