//CSC 134
// M2lab2 Recipet lab
//Chavez R
// 9/14/26
// making a receipt that looks like a receipt



#include <iostream>

//iomanip lets you use setw() and setprecision() and fixed  
#include <iomanip>
using namespace std;

int main() {

    //declare variables
    // got to calc tax before getting total

    string meal_name; 
    double meal_price = 5.99;       //USD everything
    double tax_rate = 0.08;         //percent
    double tax_amount;
    double total;                   // meal + tax usd

    //INPUT
    //nothing, they are picking one sandwich
    //for now hard code some values
    meal_name = "Talan-wich";
    meal_price = 5.99;
    tax_rate = 0.08; //8%

    //PROCESSING
    tax_amount = meal_price * tax_rate;
    total = meal_price + tax_amount;

    //Total needs to be two decimal places


    //OUTPUT
    //TODO PRINT LIKE RECEIPT
    string line = "-------------------------------------";
    cout << line << endl;
    //Set width of colummns and 2 decimal price

    cout << setprecision(2) << fixed;       //requires #include <iomanip> for decimal and colummns
    
    cout << setw(20) << meal_name << setw(10) << meal_price << endl;
    cout << setw(20) << "Tax:  " << setw(10) << tax_amount << endl;
    cout << line << endl;
    cout << setw(20) << "Total: " << setw(10) << total << endl;
    cout << "Thank You Come Again" << endl << endl;


    return 0; //no errors

}

