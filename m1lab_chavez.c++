//CSC 134
// m1lab
// Chavez
// 8/24/2026

#include <iostream>
using namespace std; 

int main() {

    //std :: cout << 
    string name = "Jane Smith";
    int apples = 225;
    double pricePerApple = 0.25;
    cout << " Welcome to " << name;
    cout << "'s Apple Farm " << endl;

    cout << " We Have " << apples << " apples for sale " << endl;
    cout << " Price is $" << pricePerApple << " each. " << endl;

    // calc total price
    double totalPrice = (double) apples * pricePerApple;
    cout << " Total price is: $ " <<totalPrice << endl; 
}
