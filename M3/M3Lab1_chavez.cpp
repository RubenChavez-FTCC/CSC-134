// CSC 134 
// m3lab 1 menys and choices
// Ruben Chavez
// 9/28/2026

#include <iostream>
using namespace std;

// DECLARING funcs that are coming later - void
// after main DEFINE ur functions in full
void choose1();
void choose2();

int main() {
    
    int choice; 

    cout << "Talan knocks on your door and asks you if you want to come on a drive with him. " << endl;
    cout << "1. No, I do not to go on a drive. " << endl;
    cout << "2. Let us go. " << endl;
    cout << "? "; // the prompt
    cin >> choice;

    if (1 == choice) {
        choose1();
    }
    else if (2==choice) {
        choose2();
    }
    else {
        cout << "I'm sorry, that is not a valid choice and Talan explodes " << endl;
    }

    cout << "Thanks for playing! " << endl;

    return 0; //end of main()
}

void choose1() {
    //this func is brought in when main chooses door 1 
    cout << "You chose to not go. " << endl;
    cout << "You lay down and sleep, while Talan dies. " << endl;
}

void choose2(){

    int choice;

    //this func is brought in when main chooses door 2
    cout << "You chose to go with Talan " << endl;
    cout << "Now where do you go? " << endl;

    cout <<"1. A Pokemon event " << endl;
    cout << "2. Seattle " << endl;
    cout << "? ";
    cin >> choice; 

    if (1==choice){
        cout << "As Talan is drving he speeds up on a turn, he hits a bump and starts to leak gas. " << endl;
        cout << "You don't make it anywhere." << endl;
    }
    else if (2==choice){
        cout << "Talan and you go to Seattle. You're not sure what to do and so you get some food" << endl;
        cout << "You head back happy.  " << endl;
    }
    else {
        cout << "I'm sorry, that is not a valid choice and Talan dies " << endl;
    }

}

