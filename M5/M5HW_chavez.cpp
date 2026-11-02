// CSC-134
// Chavez Ruben 
// 11/2/2026
// M5 homework 


// Tier here


#include <iostream>
using namespace std;


void question1();
void question2();
void question3();
void question4();

int main() {
    //run only questions you finish by moving the comments //
 //question1(); 
 question2(); 
// question3(); //DONE 
 //question4(); 
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

