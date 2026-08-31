// CSC 134
/*
M1HW - movie talk
Chavez, R
8/31/2026
Talk about Iron Man
*/

#include <iostream>
using namespace std;
//starting point

int main () {

    //practice using string, in, double, within natural text
    //declare vari
    string movie_name; //flim title
    int movie_year;    //year of realse
    double movie_gross; //millions in USD

    //example shrek turn to iron man
    movie_name = "Iron Man"; 
    movie_year = 2008;
    movie_gross = 585.8; // half a bil international

    //print the movie blurb
    cout << "The movie " << movie_name << " came out in " << movie_year << "." << endl;

    cout << "It grossed in total $" << movie_gross << " million. " << endl;

    // print a movie qoute 
    cout << "QOUTE:" << endl << " \t\" I am Iron Man. \" " << endl;

    return 0; // no errors 
}

    