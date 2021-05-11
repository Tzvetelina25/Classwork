#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the interval: ";
    cin>>a>>b;
    srand(time(0)); //seed random number generator
    int num = rand() % (b-a+1) + a; // random number
    cout << "Guess My Number Game"<<endl;

    int guess = 0,counter=0;
    while (guess != num) {
        cout << "Enter a guess from the interval: ";
        cin >> guess;

        if (guess > num) {
            cout << "Too high!"<<endl;
            counter++;
        }
        else if (guess < num)
            {
                cout << "Too low!"<<endl;
                counter++;;
            }
        else {
            counter++;
            cout << "Correct! You got it in with "<<counter<<" attempts"<<endl;
        }
    }
    return 0;
}
