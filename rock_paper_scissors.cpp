#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0)); //seed random number generator
    int computer = rand() % 3; // random number between 0, 1 and 2
    cout<<"Rock Paper Scissors Game"<<endl;

    int number;
    cout<<"Enter a number between 0, 1 and 2: "<<endl;
    cin>>number;
    if(computer == 0){
            if(number == 0){
                cout<<"The computer is scissor. You are scissor too. It is a draw"<<endl;
            }
            if(number == 1){
                cout<<"The computer is scissor. You are rock. You won"<<endl;
            }
            if(number == 2){
                cout<<"The computer is scissor. You are paper. You lost"<<endl;
            }
    }
    if(computer == 1){
            if(number == 0){
                cout<<"The computer is rock. You are scissor. You lost"<<endl;
            }
            if(number == 1){
                cout<<"The computer is rock. You are rock too. It is a draw"<<endl;
            }
            if(number == 2){
                cout<<"The computer is rock. You are paper. You won"<<endl;
            }
    }
    if(computer == 2){
            if(number == 0){
                cout<<"The computer is paper. You are scissor. You won"<<endl;
            }
            if(number == 1){
                cout<<"The computer is paper. You are rock. You lost"<<endl;
            }
            if(number == 2){
                cout<<"The computer is paper. You are paper too. It is a draw"<<endl;
            }
    }
    return 0;
}
