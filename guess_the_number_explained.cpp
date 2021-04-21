#include <iostream> //vkluchvane na bibliotekata iostream za vhodno-izhodni operatsii
#include <cstdlib> //vkluchvane na biblioteka za funktsii
#include <ctime> //vkluchvane na biblioteka
using namespace std; //dava vuzmozhnost za izpolzvane na deklaratsii, funktsii i dr.

int main() //glavna funkciq v progamata, ottuk zapochva izpulnenieto na programata
{
    srand(time(0)); //seed random number generator
    int num = rand() % 100 + 1; // random number between 1 and 100
    cout << "Guess My Number Game\n\n"; //izvezhda se suobshtenie kum potrebitelq

    int guess = 0; //promenliva za predpolozheniqta na potrebitelq
    while (guess != num) { //tsikylyt se izpulnqva, dokato predpolozheieto e razlichno ot tyrsenoto chislo
        cout << "Enter a guess between 1 and 100 : "; ////vkluchvane na biblioteka
        cin >> guess; //potrebitelqt vuvezhda predpolozhenie

        if (guess > num) { //ako predpolozhenieto na potrebitelq e po-golqmo ot chsloto
            cout << "Too high!\n\n"; //izvezhda se, che predpolozhenieto e po-golqmo ot chisloto
        }
        else if (guess < num) ////ako predpolozhenieto na potrebitelq e po-malko ot chsloto
            {
                cout << "Too low!\n\n"; //izvezhda se, che predpolozhenieto e po-malko ot chisloto
            }
        else {
            cout << "\nCorrect! You got it in "; //izvezhda se, che chisloto e poznato ot potrebitelq
        }
    }

    return 0;
}
