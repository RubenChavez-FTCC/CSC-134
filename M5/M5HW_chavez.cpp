// CSC-134
// Chavez Ruben 
// 11/2/2026
// M5 homework 




// SILVER TIER


#include <iostream>
using namespace std;


void question1();
void question2();
void question3();
void question4();
void question5();
void question6();

void circle();
void rectangle();
void triangle();

int main() {
    //run only questions you finish by moving the comments //

 question1(); //DONE
 question2(); //DONE
 question3(); //DONE 
 question4(); //DONE
 question5(); //DONE
 //question6();

}

void question3(){
    cout << "Question 3 here " << endl;

    int number;
    cout << "Type a number between 1-10 to get its romanal nurmel: " << endl;
    cin >> number;

    if (number <= 0 || number>= 11 ){
        cout << "Number cannot be more than ten or less than one." << endl;
        cout << "------------------------------------------------" << endl;
        question3();
    }
    if (number == 1){
        cout << "1 is I " << endl;
    }
    if(number == 2){
        cout << "2 is II " << endl;
    }
     if(number == 3){
        cout << "3 is III " << endl;
    }
     if(number == 4){
        cout << "4 is IV " << endl;
    }
    if(number == 5){
        cout << "5 is V " << endl;
    }
    if(number == 6){
        cout << "6 is VI " << endl;
    }
    if(number == 7){
        cout << "7 is VII " << endl;
    }
    if(number == 8){
        cout << "8 is VIII " << endl;
    }
    if(number == 9){
        cout << "9 is IX " << endl;
    }
    if(number == 10){
        cout << "10 is X " << endl;
    }
  
}


void question2(){
    cout << "question 2 goes here. " << endl;
    cout << "Hyperrectangle area claculator. " << endl;

    double length;
    double width;
    double height;
    
    cout << "Please enter the length: " << endl;
    cin >> length;
    cout << "Please enter the width: " << endl;
    cin >> width;
    cout << "Please enter the height: " << endl;
    cin >> height;

    if (length <= 0 || width <= 0 || height <= 0){
        cout << "No side can be zero or less." << endl;
        question2();
    }

    else {
     int area = length * height * width;
    cout << "The block's area is " << area << endl;
    }
    

}

void question1(){
    cout << "question 1 goes here" << endl;

    string month1;
    double rain1;
    string month2;
    double rain2;
    string month3;
    double rain3;

    cout << "Average rainfall(in inches) for three months" << endl;

    cout << "Enter month: " << endl;
    cin >> month1; 
    cout << "Enter rainfall for " << month1 << endl;
    cin >> rain1;

    cout << "Enter month: " << endl;
    cin >> month2; 
    cout << "Enter rainfall for " << month2 << endl;
    cin >> rain2;

    cout << "Enter month: " << endl;
    cin >> month3; 
    cout << "Enter rainfall for " << month3 << endl;
    cin >> rain3;


    int avg = (rain1 + rain2 + rain3)/3;
    cout << "The average rainfall for " << month1 << ", " << month2 << " & " << month3 << " is " << avg << " Inches." << endl;

}

void question5(){
    cout << "question 5 here " << endl;

    // dist = speed * time
    double speed;
    int hour;

    cout << "What is the speed of the vehile in mph?" << endl;
    cin >> speed;

    

    cout << "How many hours has it traveled? " << endl;
    cin >> hour;

    if (hour <= -1 || speed <= 0 ){
        cout << " Cannot be a negative number." << endl;
        question5();
    }

    else{
    cout << "Hour            Distance Traveled" << endl;
    cout <<"----------------------------------" << endl;

    int i = 1;
    while (i <= hour){

    cout << i << "                " << i * speed << endl;
    i++;
    }
    }





}

void question4(){

    cout << "question 4 here " << endl;

    int choice;

    cout <<"Geometry Calculator " << endl;
    cout << "1. Calculate the area of a circle " << endl;
    cout << "2. Calculate the area of a rectangle " << endl;
    cout << "3. Calculate the area of a triangle " << endl;
    cout << "4. Quit " << endl; 
    cout << "Enter choice (1-4): " << endl;
    cin >> choice;
    
     if (1 == choice) {
    circle();
  } 
  else if (2 == choice) {
    rectangle();
  }
   else if (3 == choice) {
      triangle();
  }
   else if (4 == choice) {
    cout << "Ok, quitting " << endl;
    return; // go back to main()
  }
  else {
    cout << "That's not a valid choice, please try again." << endl;
    return; // try again
  }

}


//AI added the input validations for rect, tri, and circle 
void circle(){

    double radius;
    double area;
    cout << "Enter the radius of the circle: " << endl;
    cin >> radius;
    while (radius < 0) {
        cout << "Radius cannot be negative. Enter the radius again: " << endl;
        cin >> radius;
    }
    area = 3.14 * radius * radius;
    cout << "The area of the circle is: " << area << endl;
}




void rectangle(){

    double length;
    double width;
    double area;
    cout << "Enter the length of the rectangle: " << endl;
    cin >> length;
    while (length < 0) {
        cout << "Length cannot be negative. Enter the length again: " << endl;
        cin >> length;
    }
    cout << "Enter the width of the rectangle: " << endl;
    cin >> width;   
    while (width < 0) {
        cout << "Width cannot be negative. Enter the width again: " << endl;
        cin >> width;
    }

    area = length * width;
    cout << "The area of the rectangle is: " << area << endl;

}

void triangle(){

    double base;
    double height;
    double area;
    cout << "Enter the base of the triangle: " << endl;
    cin >> base;
    while (base < 0) {
        cout << "Base cannot be negative. Enter the base again: " << endl;
        cin >> base;
    }
    cout << "Enter the height of the triangle: " << endl;
    cin >> height;
    while (height < 0) {
        cout << "Height cannot be negative. Enter the height again: " << endl;
        cin >> height;
    }

    area = 0.5 * base * height;
    cout << "The area of the triangle is: " << area << endl;

}
