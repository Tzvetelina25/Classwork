#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int main ()
{
    int number, start;
    cout<<"Enter a number of lines: "<<endl;
    cin>>number;
    for(int start=number; start>0; start--){
        for(int i=start; i>0; i--){
            cout<<i<<" ";
        }
        for(int i=2; i<=start; i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}

