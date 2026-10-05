


#include <iostream>
using namespace std;

int main(){
    bool done = true;
    while (done == false) {
        cout << "still going ...";
    }
    //crtl c in teminal to stop a repeating loop

    int count = 1;
    while (count < 6){
        // if count ++ is before the cout then it would start at 1+1, so 2
        cout << "Count is: " << count << endl;
        count++; //increment AFTER showing the number


    }

    //validation loop
    //test - number msut be 1 and 5

   
    bool is_valid = false;
    int number;
    while (false == is_valid){
        cout << " Enter a number from 1-5: ";
        cin >> number;
        if (number < 1 ){
            cout << "Too low! " << endl;
        }
        else if (number > 5){
            cout << "Too high! " << endl;
        }
        else {
            cout << "You entered: " << number << endl;
            is_valid = true; 
        }

    }

    return 0;
}