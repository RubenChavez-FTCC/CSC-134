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


void choice_explore_further();
void choice_wipe_it_off_ending();
void choice_go_back_up();
void choice_front_door_ending();
void choice_back_door_ending();







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
    choice_back_door();
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
  cout << "You walk to the back door." << endl;
  cout << "The back door is boarded up. " << endl;
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


void choice_go_home() {
  cout << "You leave the house. you had a bad feeling." << endl;
  cout << "Maybe for the better." << endl; 
}
  


void choice_up_stairs() {
  cout << "You go upstairs." << endl;
  cout << "Your arm starts to bleed out more and you feel dizzy" << endl;
  cout << "You see something move across the hallway." << endl;
  cout << "You try backing up slowly you mistep and fall down the stairs." << endl;
  cout << "You are helpless to get up, you stay there forever the house not letting you leave." << endl;
}

void choice_down_stairs() {
  cout << "In a basement of some sorts " << endl;
  cout << "Arm starts to bleed more, you see a first aid kit " << endl;
  cout << "You take it and wrap up your arm " << endl;
  cout << "Do you:" << endl;
  cout << "1. Go back up" << endl;
  cout << "2. Explore further" << endl;
  int choice = 0;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_go_back_up();
  } else if (2 == choice) {
    choice_explore_further();
  }
}


void choice_explore_further() {
  cout << "You move through cobwebs and dusty boxes piled up " << endl;
  cout << "You reach the end of the room " << endl;
  cout << "A symbol is drawn on the wall it makes you uneasy" << endl;
  cout << "Do you:" << endl;
  cout << "1. Wipe it off" << endl;
  cout << "2. Go back up" << endl;
  int choice = 0;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_wipe_it_off_ending();
  } else if (2 == choice) {
    choice_go_back_up();
  }
}

void choice_wipe_it_off_ending() {
  cout << "You wipe the symbol." << endl;
  cout << "You feel normal." << endl;
  cout << "You walk back." << endl;
  cout << "You start to breathe heavy" << endl;
  cout << "It's hard to breathe now" << endl;
  cout << "You stop." << endl;
  cout << "You can't move your body." << endl;
  cout << "You lie down, compelled to lie still." << endl;
  cout << "The house doesn't let you leave." << endl;
  cout << "You can't leave your body." << endl;
}

void choice_go_back_up() {
  cout << "You are on the first floor, still can't see well." << endl;
  cout << "You start to breathe heavily " << endl;
  cout << "You need to get out " << endl;
  cout << "Do you go to the front door or back?" << endl;
  cout << "1. Front door" << endl;
  cout << "2. Back door" << endl;
  int choice = 0;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_front_door_ending();
  } else if (2 == choice) {
    choice_back_door_ending();
  }
}

void choice_front_door_ending() {
  cout << "You rush to the door." << endl;
  cout << "It's hard to breathe." << endl;
  cout << "The door won't open." << endl;
  cout << "You bash the door." << endl;
  cout << "Nothing budges." << endl;
  cout << "You are tired, breathing takes more effort than normal." << endl;
  cout << "Tiredness overcomes you." << endl;
  cout << "You slide down on the door." << endl;
  cout << "You close your eyes and drift off." << endl;
  cout << "The House doesn't let you leave." << endl;
}

void choice_back_door_ending() {
  cout << "You start your way to the back door. " << endl;
  cout << "Your breathing gets harder every step takes more effort. " << endl;
  cout << "You can hear the wind from the window." << endl;
  cout << "You throw your body out, fresh air fills your lungs. " << endl;
  cout << "You made it out and go home." << endl;
}



