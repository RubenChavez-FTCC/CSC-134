// CSC 134
// chavez ruben 
// 9/23/2026
// making carps table 


#include <iostream>
#include <cstdlib> //for random number
#include <ctime> // for time()

using namespace std;

int main() {

    //random number gen 
    // rand(); needs to be seeded with srand()
    // most 'random' is to use the time 

    srand(time(0)); // current seed is the right now 
   // cout << rand() << " " <<  rand() << endl;
    // to get a number in a usable size, use % (modulo)

    int roll1 = (rand() % 6) + 1; // mod 6 is 0-5, so add 1 for 1-6
    int roll2 = (rand() % 6) + 1;
    int total = roll1 + roll2;
    int point; //only used if you roll a point

    cout << "You rolled: " << roll1 <<  " + " << roll2 << " = " << total << endl;

    //processing win or lose
    // || is OR   && is AND
    // cant do == 7|| 11 needs to be ==7|| total == 11
    
    if (total == 7 || total == 11) {
        cout << "You win! " << endl;
    }
    else if (total == 2 || total == 3 || total == 12) {
        cout << "You lose." << endl;
    }
    else { 
        point = total; //last roll becomes point number
        cout << "Your point number is: " << point << endl;
        cout << "Keep rolling: point is win, 7 is loss. " << endl;
        //finish later because needs loops
    }

    return 0;
}