//csc 134
// chavez ruben 
// 10/21/2026
// Partner: Gpt-6 luna
// m4t2 collab with a bot - a table of squares with functions


#include <iostream>
using namespace std;

//prototype: declare funcs here 

int square(int num);   //does math
void printAnswerLine(int number, int squared); // prints a full line of the table

int main (){
    cout << "Table of Squares Program " << endl;
    cout << endl << "Number   Number Squared " << endl;
    cout << "-----------------------" << endl;
    int MIN_NUM = 1;
    int MAX_NUM = 10;

    //MIN num starts loop   |<= keeps looping till MAX | number ++ adds 1 after each pass 
    for (int number = MIN_NUM; number <= MAX_NUM; number++) {

        int squared = square(number); //calcuates the square and stores it in intsquared

        printAnswerLine(number, squared); // now number = num and squared = num*num in format 
    }
    
    return 0;
}


//Define functions here 

// Gets MIN_NUM = number -> square(number), gets stored in int squared
int square(int num){
    // does the math 
    // INPUT: one integer
    // OUTPUT: that number squared
    int square = num * num;
    return square;
    
}

// A formating func -> has number from MIN_NUM and the stored value from int squared
void printAnswerLine(int number, int squared){
    //print oneline of the table -- input
    // example 3    9
    cout << number << " squared is " << squared << endl;
    
}


// number = minNUM which is 3 in this case
// then sqaured = sqaure of number(minNUM=3) -> stores it 
// printAnswer -> number(minNUM=3) , sqaured = (number*number) in the format of the void loop
