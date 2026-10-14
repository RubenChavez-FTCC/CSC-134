//CSC-134
// chavez ruben 
// 10/12/2026
// hw times table

// tier GOLD

#include <iostream>
#include <iomanip>
using namespace std;

int main (){

// vari
int table = 0;
int i = 1;
while (table <= 0 || table >= 13){

cout << "Enter a number between 1-12" << endl;
cin >> table;
 if (table <= 0 ){
        cout << "Number cannot be zero or negative. " << endl;
    }

 else if (table >= 13){
    cout << "Number cannot be greater than 12. " << endl;
}

}

while (i <= 12){

    cout << table << " times " << i << " is " << table*i << "." <<endl;
    i++;
} 



}
