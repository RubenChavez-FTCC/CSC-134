//CSC 123
//M2 HW1
//chavez ruben
//9/16/2026

/* Gold tier, answering all 4 questions 
*/

#include <iostream>
#include <iomanip>
using namespace std;

void question1();
void question2();
void question3();
void question4();

int main() {
    //run only questions you finish by moving the comments //
// question1(); //done
// question2(); //done
// question3(); //done
// question4(); //done
}


void question1(){
    cout << "Question 1 goes here" << endl;

    //declare varis
    string name; 
    string transaction;
    int enter_PIN = 1234;
    double starting_bal; //usd for all
 
    cout << fixed << setprecision(2); 
   
    //ask for name, starting balance, deposit or withdrawal

        cout << "What is your account name? " << endl;
        cin >> name;

        cout << "What is your account's pin number? Please enter a 4 digit number." << endl;
        cin >> enter_PIN;

        cout << "----------------------------------------------------------------" << endl;
        
        cout << "What is you're starting balance? " << endl;
        cin >> starting_bal;

        cout << "The account " << name << " has $" << starting_bal << ". In the account 1***. " << endl;
        
        cout << "----------------------------------------------------------------" << endl;

        // depo and with part
        double deposit_amo;
        double with_amo;
        cout << "How much would you like to deposit? $:" <<endl;
        cin >> deposit_amo;

        cout << "How much would you like to withdrawal? $:" << endl;
        cin >> with_amo;

        cout << "----------------------------------------------------------------" << endl;
        
    //processing, getting final bal and pin again
    double final_bal = starting_bal + deposit_amo - with_amo; //one time check it is not constanly checking rember that

    cout << "Before the transaction what is your pin number? Please type a 4 digit number" << endl;  
    cin >> enter_PIN;

     cout << "----------------------------------------------------------------" << endl;
    
    cout << "The account #1234 " << name << " now has a balance of $" << final_bal << ". Thank you come again. " << endl;
        

}
void question2(){
    cout << "Question 2 goes here" << endl;

    const double COST_PERCUBIC_FOOT = 0.3;  //const = Constants that never change
    const double CHARGE_PERCUBIC_FOOT = 0.52;

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
    cout << setprecision(2) << fixed;  //makes it so its 2 decimal for all values 

    cout << "A crate measuring " << length << " x " << width << " x " << height << " ft. " << endl;

    cout << "Its volume: " << volume << " cubic feet " << endl;
    cout << "Sells for:    $" << crate_charge << endl;
    cout << "Profit:       $" << profit << endl;
}
void question3(){
    cout << "Question 3 goes here" << endl;

    //pizza party 
    //declare vari
    int pizza_boxes; 
    int vistors; 

    //how many pizza & how many slices, how many people
    cout << "How many pizzas did you order? Each box comes with 8 slices. " << endl; //tell user theres 8 silces 
    cin >> pizza_boxes;

    cout << "How many people are coming? " << endl;
    cin >> vistors;

    //Processing
    int pizza_slice = pizza_boxes * 8; 
    int pizza_buddy = vistors * 3; 
    int pizza_leftover = pizza_slice - pizza_buddy; 

    // OUTPUT
    cout << "You have " << pizza_slice << " pizza slices and have " << vistors << " friends over, so you have " << pizza_leftover << " slices for left overs. " << endl;
    
}
void question4(){
    cout << "Question 4 goes here" << endl;

    //declare varis 

    string school = " Let's go FTCC ";
    string team = " Let's go Trojans ";
  
    //Cheer part 
    cout << school << '\n' << school << '\n' << school << endl;
    cout << team << endl;

}
