//Write a program to find multiples of 3 upto n.
#include <iostream>
using namespace std;
int main(){
    int n;
    
    cout << "Enter any positive integer:";
    cin >> n;
    
    for(int i=0; i<=n; i+=3){
        cout << i <<endl;
    }

    return 0;
}