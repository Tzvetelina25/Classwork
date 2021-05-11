#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int main ()
{
    int number, start;
    cout<<"Enter a number of lines: "<<endl;
    cin>>number;
    for(int start=0; start<number; start++){
        for(int i=0; i<start; i++){
            cout<<" ";
        }
        for(int i=0; i<number-start; i++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
