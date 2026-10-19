// csc-134
// chavez ruben
// 10/19/2026
// m5 t1

#include <iostream>
using namespace std;


// declare funcs
void greet();
void speak(string message);
// value return funcs
int num_add(int num);
int num_double(int num);

int main()
{
    cout << "Void Function Example: " << endl;
    greet();
    speak(" Hello World ");
    speak (" Another message. ");


    cout << "Value returning example" << endl;
    int number;
    cout << "Enter an integer: " << endl;
    cin >> number;
    int answer = num_add(number);
    cout << "num_add (" << number << ") returns: " << answer << endl;

    answer = num_double(number);
    cout << "num_double(" << number << ") returns: " << answer << endl;


    return 0;

}
    //define funcs here

void greet() {
    cout <<"What's up?" << endl;
}

void speak(string message) {

    cout << message << endl;
}

//value return funcs
int num_add(int num) {
    num = num + 1;
    return num;
}

int num_double(int num){
    num *= 2; // same as num = num*2
    return num;

}

