// CSC 134 
// m3lab 1 menys and choices
// Ruben Chavez
// 9/28/2026

#include <iostream>
using namespace std;

// DECLARING funcs that are coming later - void
// after main DEFINE ur functions in full
void chooseDoor1();
void chooseDoor2();

int main() {
    
    int choice; 

    cout << "Do you choose Door 1 or Door 2? " << endl;
    cout << "1. Choose Door #1 " << endl;
    cout << "2. Choose Door #2 " << endl;
    cout << "? "; // the prompt
    cin >> choice;

    if (1 == choice) {
        chooseDoor1();
    }
    else if (2==choice) {
        chooseDoor2();
    }
    else {
        cout << "I'm sorry, that is not a valid choice. " << endl;
    }

    cout << "Thanks for playing! " << endl;

    return 0; //end of main()
}

void chooseDoor1() {
    //this func is brought in when main chooses door 1 
    cout << "You chose Door 1 " << endl;
    cout << "You win . . . A NEW CAR! " << endl;
}

void chooseDoor2(){
    //this func is brought in when main chooses door 2
    cout << "You chose Door 2 " << endl;
    cout << "You win . . . A NEW PAIR OF PANTS! " << endl;
}

