#include <iostream>
#include <limits>
using namespace std;

/*
CSC 134
M5LAB1 - Choose Your Own Adventure
chavez ruben
10/26/2026

This template is a starting point for your own program.
We use void functions to tell a simple story.
The player makes choices, and each choice calls a function.
*/

// FUNCTION PROTOTYPES
// Every function you write must be listed here, above main().
// The compiler reads the file from top to bottom. A prototype
// tells it: "this function exists, and its full code is below."
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();

// TODO: add your new prototypes here

void choice_climb_window();
void choice_up_stairs();
void choice_down_stairs();

int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  // Start the story.
  main_menu();
  // When main_menu() returns, the story is over.
  cout << "Thanks for playing!" << endl;
  return 0; // finished with no errors
}

// FUNCTION DEFINITIONS
// The full code for each function goes here, below main().

void main_menu() {
  // A menu that accepts 1, 2, 3, or 4 (quit).
  cout << "Main Menu" << endl;
  cout << "You're in front of a spooky old house..." << endl;
  cout << "Do you:" << endl;
  cout << "1. Try the front door" << endl;
  cout << "2. Sneak around back" << endl;
  cout << "3. Forget it, and go home" << endl;
  cout << "4. [Quit]" << endl;
  cout << "Choose: ";
  int choice = 0;
  cin >> choice;
  if (cin.fail()) {
    // The player typed something that is not a number.
    cin.clear(); // reset cin so it can read again
    choice = 0;  // treat it as an invalid choice
  }
  // Throw away the rest of the line the player typed.
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  if (1 == choice) {
    choice_front_door();
  } else if (2 == choice) {
    // call choice 2 here
  } else if (3 == choice) {
      choice_go_home();
  } else if (4 == choice) {
    cout << "Ok, quitting game" << endl;
    return; // go back to main()
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    main_menu(); // try again
  }
}

void choice_front_door() {
  cout << "Try the front door." << endl;
  cout << "It's locked." << endl;
  cout << "Do you:" << endl;
  cout << "1. Check around back" << endl;
  cout << "2. Give up and go home" << endl;
  int choice = 0;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_back_door();
  } else if (2 == choice) {
    choice_go_home();
  }
}


void choice_back_door() {
  cout << "The Back door is borded up. " << endl;
  cout << "You can't get in that way." << endl;
  cout << "However a window is broken." << endl;
  cout << "Do you: " << endl;
  cout << "1. Climb through the window" << endl;
  cout << "2. Cut your losses and go home" << endl;
  int choice = 0;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_climb_window();
  } else if (2 == choice) {
    // call function for going back to front door
    choice_go_home();
  }

}

void choice_climb_window() {

    cout << "You climb through the window, and hurt your arm on the way in." << endl;
    cout << "You are bleeding bad, but you are inside the house." << endl;
    cout << "It is dark and you can't see clearly." << endl;
    cout << "You move forward and see two staircases, one going up and one going down." << endl;
    cout << "Do you: " << endl;
    cout << "1. Go upstairs" << endl;
    cout << "2. Go downstairs" << endl;
    int choice = 0;
    cout << "Choose: ";
    cin >> choice;
    if (1 == choice) {
    choice_up_stairs();
    } else if (2== choice){
      choice_down_stairs();
    }     

}

void choice_up_stairs() {
  cout << "You go upstairs, your arm is still bleeding and you feel dizzy." << endl;
  cout << "You see a a blur at the end of the hallway" << endl;
}





void choice_go_home() {
  cout << "You cut your losses, you had a bad feeling about the house." << endl;
  cout << "Maybe for the better." << endl;
}


// TODO: add your new function definitions here
