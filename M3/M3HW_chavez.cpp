// csc-134
//chavez ruben
// 9/30/2026



//Tier goes here 


#include <iomanip>
#include <cstdlib> //for random number
#include <ctime> // for time()
#include <iostream>
using namespace std;

void question1();
void question2();
void question3();
void question4();

int main() {
    //run only questions you finish by moving the comments //
// question1(); //done
 question2(); 
// question3(); //done
// question4(); //done
}



void question1(){
    cout << "Question 1 goes here" << endl;

    cout << "Hello I am a virtual person, I am called Valan" << endl;
    cout << "Are virtual people good listners? Please type yes or no." << endl;

    //vari
    string answer; 
    cin >> answer;
    

    // always 2 ==
    if (answer == "yes"){
        cout << "Indeed I do listen. " << endl;
    }
    else if (answer == "no"){
        cout << "Well, I couldn't hear you. " << endl;
    }
    else {
        cout << "I will get better at listening for that. " << endl;
    }

    return;

}

void question2(){
    cout << "Question 2 goes here" << endl;

 //declare variables
    // got to calc tax before getting total

    string meal_name; 
    double meal_price = 5.99;       //USD everything
    double tax_rate = 0.08;         //percent
    double tax_amount;
    double total;   // meal + tax usd

    double tip_rate;
    double tip;                
    double DINE_total; // meal + tax + tip
    string answer;

    //INPUT

        cout << "Welcome to KFT, Kentucky Fried Talan.  Is this order for take-out or dine-in?" <<endl;
        cout << "Please type 1 for take-out or 2 for dine-in." <<endl;
        cin >> answer;

    //nothing, they are picking one sandwich
    //for now hard code some values
    meal_name = "Talan-wich";
    meal_price = 5.99;
    tax_rate = 0.08; //8%
    tip_rate = 0.15; //15%

    //PROCESSING
    tax_amount = meal_price * tax_rate;
    total = meal_price + tax_amount;
    tip = meal_price * tip_rate;
    DINE_total = total + tip;

    //Total needs to be two decimal places

    //OUTPUT
    //TODO PRINT LIKE RECEIPT

     string line = "-------------------------------------";
    cout << line << endl;

    if (answer == "1"){ 
        
    //Set width of colummns and 2 decimal price

    cout << setprecision(2) << fixed;       //requires #include <iomanip> for decimal and colummns
    
    cout << setw(20) << meal_name << setw(10) << meal_price << endl;
    cout << setw(20) << "Tax:  " << setw(10) << tax_amount << endl;
    cout << line << endl;
    cout << setw(20) << "Total: " << setw(10) << total << endl;
    cout << setw(30) << "Thank You Come Again" << endl << endl;
    }

   
   else if (answer == "2"){
    cout << setprecision(2) << fixed;       
    
    cout << setw(20) << meal_name << setw(10) << meal_price << endl;
    cout << setw(20) << "Tax:  " << setw(10) << tax_amount << endl;
    cout << setw(20) << "Tip:  " << setw(10) << tip << endl;
    cout << line << endl;
    cout << setw(20) << "Total: " << setw(10) << DINE_total << endl;
    cout << setw(30) << "Thank You Come Again" << endl << endl;

   }

   else {
    cout << "Not a valid answer." << endl;
   }

    

}



// question 3 has choose1 and 2 
void question3(){
    cout << "Question 3 goes here" << endl;

    void choose1();
    void choose2();

    int choice; 

    cout << "Talan knocks on your door and asks you if you want to come on a drive with him. " << endl;
    cout << "1. No, I do not to go on a drive. " << endl;
    cout << "2. Let us go. " << endl;
    cout << "? "; // the prompt
    cin >> choice;

    if (1 == choice) {
        choose1();
    }
    else if (2==choice) {
        choose2();
    }
    else {
        cout << "I'm sorry, that is not a valid choice and Talan explodes " << endl;
    }

    cout << "Thanks for playing! " << endl;

    
}

void choose1() {
    //this func is brought in when main chooses door 1 
    cout << "You chose to not go. " << endl;
    cout << "You lay down and sleep, while Talan dies. " << endl;
}

void choose2(){

    int choice;

    //this func is brought in when main chooses door 2
    cout << "You chose to go with Talan " << endl;
    cout << "Now where do you go? " << endl;

    cout <<"1. A Pokemon event " << endl;
    cout << "2. Seattle " << endl;
    cout << "? ";
    cin >> choice; 

    if (1==choice){
        cout << "As Talan is drving he speeds up on a turn, he hits a bump and starts to leak gasoline. " << endl;
        cout << "You don't make it anywhere." << endl;
    }
    else if (2==choice){
        cout << "Talan and you go to Seattle. You're not sure what to do and so you get some food" << endl;
        cout << "You head back happy.  " << endl;
    }
    else {
        cout << "I'm sorry, that is not a valid choice and Talan explodes " << endl;
    }


}




//question4
void question4(){
    cout << "Question 4 goes here" << endl;
    

// from m3t2 for random number 
 srand(time(0)); // current seed is the right now 

    int num1 = (rand() % 9) + 1; // mod 6 is 0-5, so add 1 for 1-6
    int num2 = (rand() % 9) + 1;
    int total = num1 + num2;
    int answer;

    cout << "Let's play a game. Type your answer. " << endl;
    cout << "What is " << num1 << " + " << num2 << endl;

    // out put
    cin >> answer;

    if (answer == total){
        cout << "Congrats you are correct!! You win. " << endl;
    }
    else {
        cout << "Wrong, sorry your answer is wrong. You lose! " << endl;
    }
    
}