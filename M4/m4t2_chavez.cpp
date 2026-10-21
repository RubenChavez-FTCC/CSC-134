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

    for (int number = MIN_NUM; number <= MAX_NUM; number++) {
        int squared = square(number);
        printAnswerLine(number, squared);
    }
    
    return 0;
}


//Define functions here 
int square(int num){
    // does the math 
    // INPUT: one integer
    // OUTPUT: that number squared
    int square = num * num;
    return square;
    
}

void printAnswerLine(int number, int squared){
    //print oneline of the table -- input
    // example 3    9
    cout << number << " \t " << squared << endl;

}