//CSC 134
// Ruben chavez
// 9/21/2026
// M3t1 - comparing areas



#include <iostream>
using namespace std;

int main() {
    //declare varis for each rect
    double length1, width1, area1;
    double length2, width2, area2;

    //input ask L and W for both 

    cout << "First rectangle: " << endl;
    cout << "\tlength? "; // "\t" adds a tab space to it 
    cin >> length1;
    cout << "\twidth? ";
    cin >> width1; 

    cout << "2nd rectangle: " << endl;
    cout << "\tlength? ";
    cin >> length2;
    cout << "\twidth? ";
    cin >> width2; 

    //calc find area 
    area1 = length1 * width1;
    area2 = length2 * width2;

    //output prin the areas and which one is larger

    cout << "Rectangle 1 is area : " << area1 << endl;
    cout << "Rectangle 2 is area : " << area2 << endl;

    //tell the user which one is larger more area
    // "if" checks for true or false
    // greater than or equal is >= and <= and == and < and > 

    if (area1 > area2) {
        cout << "Rectangle 1 is larger. " << endl;
    }
    else if (area2 > area1 ) { 
        cout << "Rectangle 2 is larger. " << endl;
    }
    else {
        cout << "They are the same size." << endl;   
    }

    return 0;
    
}