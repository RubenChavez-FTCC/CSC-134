//CSC 134
// M2lab1 product sales
//Chavez R
// 9/9/26
// interactive program with input

#include <iostream>
using namespace std;

int main() {

    //set up varis
    string product_name;
    int product_count;
    double product_price;  // $ USD, per item
    //vari for customers
    int purchase_count;
    double purchase_total;

    // get input
    cout << "STORE SETUP" << endl;
    cout << "Product Name; ";
    cin >> product_name;
    cout << "Item Count:  ";
    cin >> product_count;
    cout << "Price each:  $";
    cin >> product_price; 

    //input -- greet user, get order
    cout << "------------------------------------------ " << endl << endl;
    cout << "WELCOME, CUSTOMER. " << endl;
    cout << "Welcome to the " << product_name << " shop. " << endl;
    cout << " Our " << product_name << "(s) are $ " << product_price << " each." << endl;
    
    cout << "How many would you like to buy today? ";
    cin >> purchase_count; 

    // do processing
    // Note we dont verify the user input -- can buy more than we have or a neg amount
    //fixed in the loops module.
    purchase_total = purchase_count * product_price;

    //print
    cout << "You have ordered " << purchase_count << " " << product_name << "(s)." << endl;
    cout << "Total price: $" << purchase_total << endl;
    cout << "Thank you for shopping with CSC 134. " << endl << endl;

    return 0; // no errors
}

