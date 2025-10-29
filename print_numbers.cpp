//write a program to print numbers from 1 to n and print any character n times
#include <iostream>
using namespace std;
int main(){
    int n;
    char ch;

    cout<<"Enter a positive integer: ";
    cin>>n;
     
    cout<<"Enter any character: ";
    cin >> ch;

//Print any numbers
    for(int i=1; i<=n; i++){
        cout << i << endl;
    }
    
//Print any character
    for(char j=1; j<=n; j++){
        cout << ch <<endl;
    }
    return 0;
}