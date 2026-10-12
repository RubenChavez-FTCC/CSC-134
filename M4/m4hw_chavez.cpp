//CSC-134
// chavez ruben 
// 10/12/2026
// hw times table

// tier goes here 

#include <iostream>
#include <iomanip>
using namespace std;

int main (){

// vari
int table = 0;
int i = 1;

cout << "Enter a number between 1-12" << endl;
cin >> table;
while (i <= 12){

    cout << table << " times " << i << " is " << table*i << "." <<endl;
    i++;
} 



}
