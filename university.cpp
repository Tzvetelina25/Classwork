#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int main ()
{
    int tuition,sum = 0;
    tuition = 10000;
    for (int i=0;i<=10;i++){
        tuition = 1.06*tuition;
        cout<<tuition<<endl;
        if(i==10){
            for(int i=11;i<=14;i++){
             tuition = 1.06*tuition;
             sum = sum + tuition;
            }
        }
    }
    cout<<"The tuition you will have to pay, if you go to this university for four years, starting ten years from now, would be: "<<endl;
    cout<<sum<<endl;
    return 0;
}
