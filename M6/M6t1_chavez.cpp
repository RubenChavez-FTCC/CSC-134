// csc-134
// chavez ruben 
// 11/9/2026
// M6T1 


#include <iostream>  
using namespace std;

void method1();
void method2();
void method3();


int main () {

    method1();
    method2();
    method3(); // range based for loop
    return 0;

}



void method1() {
    string item = "pokemon";
    cout << "Count how many " << item << " were seen each day. " << endl;

    const int SIZE = 5;
    int counts [SIZE]; 
    int total = 0;
    double average = 0;

    for (int i=0; i < SIZE; i++){
        cout << "Day " << i+1 << ": ";
        cin >> counts[i];
        total += counts[i];
    }
    cout << "Total " << item << " seen: " << total << endl;
    average = total / SIZE;
    cout << " Average per day: " << average << endl;
    cout << item << " caught per day:" << endl;
    for (int i=0; i < SIZE; i++ ){
        cout << "Day " << i+1 << ": " << counts[i] << endl;
    }

}

void method2() {
    string item = "pokemon";
    cout << "Count how many " << item << " were seen each day" << endl;

    const int SIZE = 5;
    int total = 0;
    int today;
    double average = 0;

    for (int i=0; i < SIZE; i++ ){
        cout << "Day " << i+1 << ": ";
        cin >> today;
        total += today;
    }
    cout << "Total " << item << " seen: " << total << endl;
    average = (double) total/SIZE;
    cout << "Average per day: " << average << endl; 
}

void method3() {
    //range based 
    //cannot buffer overflow cause dont handle the index 

    const int SIZE = 5;
    int counts [SIZE] = {0, 0, 0, 0, 0};
    cout << "count pokemon per day " << endl;

    // this loop changes the array so it needs & 
    for (int& count: counts){
        cout << ">";
        cin >> count;

    }
    int total = 0;
    double avg = 0;

    // this loop only reads values so need for &
    for (int count: counts){
        total += count;
    }
    avg = (double) total / SIZE;
    cout << "total: " << total << endl << "AVG: " << avg << endl;
}

