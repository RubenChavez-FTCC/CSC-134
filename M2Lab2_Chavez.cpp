//CSC 134
// M2lab2 Recipet lab
//Chavez R
// 9/14/26
// making a receipt that looks like a receipt



#include <iostream>
using namespace std;

int main() {


    //declare variables
    // got to calc tax before getting total

    string meal_name; 
    double meal_price = 5.99; //USD everything
    double tax_rate = 0.08;   //percent
    double tax_amount;
    double total;             // meal + tax usd

    //INPUT
    //nothing, they are picking one sandwich
    //for now hard code some values
    meal_name = "Talan-wich";
    meal_price = 5.99;
    tax_rate = 0.08; //8%


    //PROCESSING


    
    //OUTPUT

    //doing tax math
    //Meal*tax rate = tax amount
    tax_amount = meal_price * tax_rate;
    total = meal_price + tax_amount;

    cout << fixed << setprecision(2); //making sure total is 2 decimal places 


    cout << "Price: $" << meal_price << endl;
    cout << "Tax: $" << tax_amount << endl;
    cout << "Total: $" << total << endl;


    return 0; //no errors

}

