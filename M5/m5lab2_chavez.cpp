// M5LAB2
// Chavez Ruben
// 10/28/2026
// csc 134

#include <iostream>
using namespace std;

// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.



double getArea(double length, double width);
double getLength();
double getWidth();

void displayData(double length, double width, double area);


int main()
{
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors
	
    double length;    // The rectangle's length
    double width;    // The rectangle's width
    double area;      // The rectangle's area
          
   // Get the rectangle's length.
   length = getLength();

   // Get the rectangle's width.
   width = getWidth();
   
   // Get the rectangle's area.
   area = getArea(length, width);
   
   // Display the rectangle's data.
   displayData(length, width, area);
          
   return 0;
}

//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//*************************************************

double getLength(){
    double LENGTH;
    cout << "Typer your length: " << endl;
    cin >> LENGTH;
    return LENGTH;

}


double getWidth(){
    double WIDTH; // separte from the normal length 
   cout <<"Type your width: " << endl;
   cin >> WIDTH;
   return WIDTH; //but gets return to getWidth as length = LENGTH
}

double getArea(double length, double width){
    return length * width;

}

void displayData(double length, double width, double area){

    cout << "The rectangle's length and width is " << length << " & " << width << ". The area is " << area << endl;
}

