//Write a C++ program to calculate the sum of the first n natural numbers using a while loop.
#include <iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    int i=1;

    cout << "Enter a positive integer: ";
    cin >> n;

    while(i <= n){
        sum += i;
        i++;
    }

    cout << "The sum of first " << n << " numbers is: " << sum << endl;

    return 0;
}