#include <iostream> //vkluchvane na bibliotekata iostream za vhodno-izhodni operatsii
#include <cstdlib> //vkluchvane na biblioteka za funktsii
#include <ctime> //vkluchvane na biblioteka
using namespace std; //

int main()
{
    srand(time(0)); //seed random number generator
    int num = rand() % 100 + 1; // random number between 1 and 100
    cout << "Guess My Number Game"<<endl;

    int guess = 0;
    while (guess != num) {
        cout << "Enter a guess between 1 and 100 : ";
        cin >> guess;

        if (guess > num) {
            cout << "Too high!"<<endl;
        }
        else if (guess < num)
            {
                cout << "Too low!"<<endl;
            }
        else {
            cout << "Correct! You got it in"<<endl;
        }
    }

    return 0;
}
