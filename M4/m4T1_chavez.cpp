//csc 134
//chavez ruben 
// 10/5/2026
//M4T1 - basic loops


#include <iostream>
using namespace std;

int main (){

   int count = 1;
    while (count <= 5){
        // if count ++ is before the cout then it would start at 1+1, so 2
        cout << "Hello # " << count << endl;
        count++; //increment AFTER showing the number
    }

    // table of sqaures (part 2)
    const int MIN_NUM = 1;
    const int MAX_NUM = 10;

    cout << endl << "Num     Num sqaured " << endl;
    cout << "------------------- " << endl;
    int i = MIN_NUM;
    while (i <= MAX_NUM){
        cout << i << " \t " << i*i << endl;
        i++;
    }

}


 