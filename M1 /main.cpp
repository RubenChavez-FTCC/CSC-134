// CSC 124
// M1Lab - apple star
//Ruben Chavez
// Calculate apple prices

#include <iostream>

using namespace std;

int main()
{
    //intro urself
    string name = "Chavez";
    string product = "talan"; //whatever name

    cout << "Welcome to the " << name << " ";
    cout << product << " farm. " << endl;

    // Do product price calc
    int product_count = 100;
    double product_price = 0.25; //in USD


    cout << "We have " << product_count << " ";
    cout << product << "(s). They are $ " << product_price;
    cout << " each. " << endl;

    double total_price = product_count * product_price;
    cout << "Total price for all " << product_count;
    cout <<  " is: $ " << total_price << endl;


    return 0;
}
