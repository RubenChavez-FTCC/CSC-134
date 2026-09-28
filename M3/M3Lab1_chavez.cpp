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

    cout << "Talan knocks on the door and asks you if you want to come on a drive with him. " << endl;
    cout << "1. No I do not to drive. " << endl;
    cout << "2. Let us go. " << endl;
    cout << "? "; // the prompt
    cin >> choice;

    if (1 == choice) {
        chooseDoor1();
    }
    else if (2==choice) {
        chooseDoor2();
    }
    else {
        cout << "I'm sorry, that is not a valid choice and Talan dies " << endl;
    }

    cout << "Thanks for playing! " << endl;

    return 0; //end of main()
}


void chooseDoor1() {
    //this func is brought in when main chooses door 1 
    cout << "You chose to not go. " << endl;
    cout << "You lay down and sleep, and Talan dies. " << endl;
}

void chooseDoor2(){
    //this func is brought in when main chooses door 2
    cout << "You chose to with Talan " << endl;
    cout << "Now where do you go? " << endl;

    cout <<"3. A pokemon event " << endl;
    cout << "4. Seattle " << endl;
    cout << "? ";
    cin >> choice; 

    if (3==choice){
        cout << "As Talan is drving he speeds up on a turn. " << endl;
        cout << "And his car's engine blew. You don't make it anywhere." << endl;
    }
    else if (4==choice){
        cout << "Talan and you go to Seattle. " << endl;
        cout << "You're not sure what to do and so you get some food and head back happy.  " << endl;
    }
    else {
        cout << "I'm sorry, that is not a valid choice and Talan dies " << endl;
    }

}

