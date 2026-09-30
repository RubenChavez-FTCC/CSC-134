// csc-134
//chavez ruben
// 9/30/2026



//Tier goes here 



#include <iostream>
using namespace std;

void question1();
void question2();
void question3();
void question4();

int main() {
    //run only questions you finish by moving the comments //
 question1(); 
// question2(); 
// question3(); 
// question4(); 
}



void question1(){
    cout << "Question 1 goes here" << endl;

    cout << "Hello I am a virtual person, I am called Valan" << endl;
    cout << "Would you like to go on a virtual drive? Please type yes or no. " << endl;

    //vari
    string answer; 
    cin >> answer;
    

// always 2 ==
    if (answer == "yes"){
        cout << "Alright lets go, alright go, go! " << endl;
    }
    else if (answer == "no"){
        cout << "Aw, next time. " << endl;
    }
    else {
        cout << "Sorry thats not an answer. " << endl;
    }

    return;

}

void question2(){
    cout << "Question 2 goes here" << endl;
}

void question3(){
    cout << "Question 3 goes here" << endl;
}

void question4(){
    cout << "Question 4 goes here" << endl;
}