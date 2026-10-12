// csc - 134
// chavez ruben
// mlab1 making a sqaure
// 10/12/20261




#include <iostream>
using namespace std;

int main (){

    string token = "*";
    //const int WIDTH = 5;
    //const int HEIGHT = 5;
    int width = 0;
    int height = 0;
    while (width <= 0 || height <= 0){

    cout << "Enter rectangle width: ";
    cin >> width;
    cout << "Enter rectangle height: ";
    cin >> height;
    //optional : complain
    if (width <= 0 ){
        cout << "width cannot be zero or negative. " << endl;
    }
    if (height <= 0 ){
        cout << "height cannot be zero or negative. " << endl;
    }

    }

    cout << "Part 1: " << endl;

    for (int i = 0; i < width; i++ ) {
        cout << token << " ";

    }
cout << endl;
cout << "Part 2: " << endl;
for (int j = 0; j < height; j++) {
    cout << token << endl;

}

cout << "Here is your rectangle " << width << " by " << height << endl;
// full rec print height number of rows 
//each row is width long 
for (int j = 0; j < height; j++) {

    for (int i=0; i < width; i++){
        cout << token << " ";
    } //repear width times 
    cout << endl;

} //repeat height times



}