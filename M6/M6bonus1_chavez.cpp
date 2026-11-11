// csc 134
// chavez ruben
// 11/11/2026


// m6lab2_0002.cpp - Text adventure starter, version 2
//
// You will use: enums, arrays, parallel arrays, a 2D array, and a game loop.
//
// HOW TO READ THE COMMENTS
// EDIT: change this line to make the game your own.
// KEEP: the game needs this line as it is.
// TRY: a question. Predict the answer. Then run the program to check.
// AI: reserved for you. Use it to cite AI help, as the assignment says.
//
// Compile and run:
// g++ -std=c++17 -Wall -Wextra m6lab2_0002.cpp -o adv
// ./adv
// assitied by GPT luna and Chavez

#include <iostream>
#include <string>
using namespace std;
// ============================================================
// PART 1: ENUMS (names for numbers)
// The compiler counts from 0. NORTH is 0, EAST is 1, and so on.
// The last name is the count: NUM_DIRECTIONS is 4.
// ============================================================
// KEEP: do not write "= number" after these names. Let the compiler count.
enum Direction {
NORTH,
EAST,
SOUTH,
WEST,
NUM_DIRECTIONS // KEEP: always the last name
};
// KEEP: the words must be in the same order as the Direction enum.
const string DIRECTION_NAMES[NUM_DIRECTIONS] = {
"north", "east", "south", "west"
};
// ADD A ROOM, step 1 of 4: add the new name above NUM_ROOMS.
// EDIT: rename the rooms. The order here must match every list below.
enum Room {
ENTRANCE_HALL,
KITCHEN,
GARAGE,
BEDROOM,
OUTSIDE,
// ATTIC, // EXAMPLE 1 of 4
NUM_ROOMS // KEEP: always the last name
};
int main() {
// ============================================================
// PART 2: ROOM DATA (parallel arrays)
// Same index means same room.
// roomNames[LIBRARY] and roomDescriptions[LIBRARY] both
// describe the Library.
// ============================================================
// ADD A ROOM, step 2 of 4: add the new name at the end of this list.
string roomNames[NUM_ROOMS] = {
"Entrance", // EDIT: use any names you like
"Kitchen",
"Garage",
"Bedroom",
"Outside",
//partly logan house 


// "Attic", // EXAMPLE 2 of 4
};
// ADD A ROOM, step 3 of 4: add the new description at the end.
// TRY: make this list one item shorter than NUM_ROOMS. Does the
// compiler warn you? What does the game print for that room?
string roomDescriptions[NUM_ROOMS] = {
"You enter in the house of Logan. It gives you a sense of nostalgia and warmth.",
"It's quiet, usually The dog comes and greets you but he's not here. There's nothing be made right now",
"The garage is filled with heaps of tools, decor, and some seats for everyone to seat down but they aren't here.",
"In Logan's bedroom you see a livley room, everyone is here.",
"You open the garage door and see the outside. The cool breeze chills your bones, you want to warm up inside. You Logan's car is parked outside, its dusty it hasn't left for a while.",
// "A cramped attic. Sunlight comes through one small window.", 
//EXAMPLE 3 of 4
};

// BONUS: objects. Use two more parallel arrays, the same way:
// string itemNames[NUM_ITEMS] = {"lamp", "key"};
// int itemRoom[NUM_ITEMS] = {KITCHEN, BASEMENT};
// itemRoom[i] holds the room number where item i is.
// You also need an enum Item that ends with NUM_ITEMS.
// ============================================================
// PART 3: THE MAP (a 2D array)
// connections[from_room][direction] holds the room you reach.
// The value -1 means "no exit".
// ============================================================
int connections[NUM_ROOMS][NUM_DIRECTIONS];
// KEEP: set every cell to -1 first. Then set only the exits that exist.
for (int i = 0; i < NUM_ROOMS; i++) {
for (int j = 0; j < NUM_DIRECTIONS; j++) {
connections[i][j] = -1;
}
}
// ADD A ROOM, step 4 of 4: add the exits in BOTH rooms.
// EDIT: change, add, or remove exits.
// Read this line as: from the Entrance Hall, go north to reach the Library.
connections[ENTRANCE_HALL][NORTH] = KITCHEN;
connections[ENTRANCE_HALL][EAST] = GARAGE;
connections[ENTRANCE_HALL][WEST] = BEDROOM;
connections[KITCHEN][SOUTH] = ENTRANCE_HALL; // the way back
connections[GARAGE][SOUTH] = OUTSIDE;
connections[GARAGE][WEST] = ENTRANCE_HALL;
connections[BEDROOM][EAST] = ENTRANCE_HALL;
connections[OUTSIDE][NORTH] = GARAGE;


// connections[LIBRARY][NORTH] = ATTIC; // EXAMPLE 4 of 4
// connections[ATTIC][SOUTH] = LIBRARY; // EXAMPLE 4 of 4
// TRY: delete one "way back" line. Predict what the player can do.
// ============================================================
// PART 4: GAME STATE
// ============================================================
int currentRoom = ENTRANCE_HALL; // EDIT: start in any room
bool gameRunning = true; // KEEP: the loop runs while this is true
// ============================================================
// PART 5: THE GAME LOOP
// One pass of the loop is one turn:
// Step 1: show the room and the exits.
// Step 2: read a command.
// Step 3: act on the command.
// Step 4: repeat, unless gameRunning is false.
// ============================================================
while (gameRunning) {
// Step 1: show the room.
cout << "\nYou are in the " << roomNames[currentRoom] << endl;
cout << roomDescriptions[currentRoom] << endl;
// Step 1, continued: show the exits.
// The loop reads one row of the map. A cell that is not -1 is an exit.
cout << "Exits: ";
bool hasExits = false;
for (int dir = 0; dir < NUM_DIRECTIONS; dir++) {
if (connections[currentRoom][dir] != -1) {
cout << DIRECTION_NAMES[dir] << " ";
hasExits = true;
}
}
if (!hasExits) {
cout << "none";
}
cout << endl;
// Step 2: read a command. The cin >> operator reads one word.
// TRY: type "go north". Predict what happens. Why?
string command;
cout << "\nWhat would you like to do? ";
if (!(cin >> command)) {
break; 
// KEEP: input ended (Ctrl+D). Stop the loop. Without this line, the game never ends.
}
// Step 3: act on the command.
// TRY: type NORTH in capital letters. Why does it fail?
// STRETCH: the four direction blocks repeat the same idea.
// Can you replace them with one loop over DIRECTION_NAMES?
if (command == "north" || command == "n") {
if (connections[currentRoom][NORTH] != -1) {
currentRoom = connections[currentRoom][NORTH]; // move to the new room
} else {
cout << "You can't go that way." << endl;
}
} else if (command == "east" || command == "e") {
if (connections[currentRoom][EAST] != -1) {
currentRoom = connections[currentRoom][EAST];
} else {
cout << "You can't go that way." << endl;
}
} else if (command == "south" || command == "s") {
if (connections[currentRoom][SOUTH] != -1) {
currentRoom = connections[currentRoom][SOUTH];
} else {
cout << "You can't go that way." << endl;
}
} else if (command == "west" || command == "w") {
if (connections[currentRoom][WEST] != -1) {
currentRoom = connections[currentRoom][WEST];
} else {
cout << "You can't go that way." << endl;
}
} else if (command == "quit" || command == "q") {
gameRunning = false; // Step 4 will end the loop
} else {
// EDIT: write your own message.
cout << "I don't understand that command." << endl;
}
}
// EDIT: write your own goodbye.
cout << "Thanks for playing!" << endl;
return 0;
}