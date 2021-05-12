#include <iostream> //vkluchvane na bibliotekata iostream za vhodno-izhodni operatsii
#include <cstdlib> //vkluchvane na biblioteka za funktsii
#include <ctime> //vkluchvane na biblioteka za funktsii, otnasqshti se do dati i vreme
using namespace std; //dava vuzmozhnost za izpolzvane na deklaratsii, funktsii i dr.

int main() //glavna funkciq v progamata, ottuk zapochva izpulnenieto na programata
{
    int a,b; //deklarirame dvete promenlivi a i b, koito sa dolnata i gornata granista na intervala
    cout<<"Enter the interval: "; //izvezhda se suobshtenie kum potrebitelq
    cin>>a>>b; //potrebitelqt vuvezhda a i b
    srand(time(0)); //seed random number generator
    int num = rand() % (b-a+1) + a; // random number between a and b
    cout << "Guess My Number Game"<<endl; //izvezhda se suobshtenie kum potrebitelq za igrata, koqto shte igrae

    int guess = 0,counter=0; //deklarirame promenlivi za predpolozheniqta na potrebitelq i za broqcha na opitite
    while (guess != num) { //tsikylyt se izpulnqva, dokato predpolozheieto e razlichno ot tyrsenoto chislo
        cout << "Enter a guess from the interval: ";  //izvezhda se suobshtenie kum potrebitelq da dade predpolozhenie
        cin >> guess; //potrebitelqt vuvezhda svoeto predpolozhenie

        if(guess==0){ //proverqvame dali predpolozhenieto e ravno na 0
            cout<< "0 is not an option. Game over."<<endl; //ako e ravno na 0, kazvame na potrebitelq, che 0 ne e optsiq i igrata prikluchva
            break; //kraj na tsikyla
        }
        if (guess > num) { //proverqvame dali predpolozhenieto e po-golqmo ot tyrsenoto chislo
            cout << "Too high!"<<endl; //ako e, izvezhdame podhodqshto syobshtenie
            counter++; //broqchyt se uvelichava s 1
        }
        else if (guess < num) //proverqvame dali predpolozhenieto e po-malko ot tyrsenoto chislo
            {
                cout << "Too low!"<<endl; //ako e, izvezhdame podhodqshto syobshtenie
                counter++; //broqchyt se uvelichava s 1
            }
        else {
            counter++; //broqchyt se uvelichava s 1
            cout << "Correct! You got it in with "<<counter<<" attempts"<<endl; //izvezhdame syobstenie, v koeto se kazva kolko sa bili opitite na potrebitelq
        }
    }
    return 0;
}
