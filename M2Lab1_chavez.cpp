//CSC 134
//M2lab1 crates
//Chavez, ruben
//9/16/2026
//excrise 3.11 from Gaddis


#include <iostream>
#include <iomanip> //setprecision and stuff 

using namespace std;

int main() {

    // Declare const and varis
    const double COST_PERCUBIC_FOOT = 0.23;  //const = Constants that never change
    const double CHARGE_PERCUBIC_FOOT = 0.50;

    double length, width, height; //can declare multiple 
    double volume; //cu ft
    double crate_cost; //usd
    double crate_charge; //usd
    double profit; //usd
    

    //get the dimension from user
    cout << "Please enter the crate dimensions " << endl;
    //Could put this into one question using cin 
    cout << "Crate length: ";
    cin >> length;

    cout << "Crate width: ";
    cin >> width;

    cout << "Crate height: ";
    cin >> height;


    // calc the vol, cost, charge, and profit
    volume = length*width*height;

    crate_cost = COST_PERCUBIC_FOOT * volume;
    crate_charge = CHARGE_PERCUBIC_FOOT * volume;

    profit = crate_charge - crate_cost;

    //format and display it for user
    cout << setprecision(2) << fixed;
    cout << "A crate measuring " << length << " x " << width << " x " << height << " ft. " << endl;

    cout << "Its volume: " << volume << " cubic feet " << endl;
    cout << "Sells for:    $" << crate_charge << endl;
    cout << "Profit:       $" << profit << endl;
   
    return 0; //no errors 

}