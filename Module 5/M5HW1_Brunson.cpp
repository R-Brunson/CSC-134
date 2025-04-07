// CSC 134
// M5HW1 - Gold
// Ricky Brunson
// 3/26/25

#include <iostream>
#include <iomanip>

using namespace std;

// Question declaration
void question1();
/*
void question2();
void question3();
void question4();
void question5();
*/

int main() {
    /*
    int homework;
    bool keep_going = true;

    while (true == keep_going) {
        cout << endl;
        cout << "M5HW1" << endl;
        cout << endl;
        cout << "1. Question 1 -- Average Rainfall" << endl;
        cout << "2. Question 2 -- Volume of a Three Dimensional Hypperrectangle" << endl;
        cout << "3. Question 3 -- Roman Numerals" << endl;
        cout << "4. Question 4 -- Geometry Calculator" << endl;
        cout << "5. Question 5 -- Distance Traveled" << endl;
        cout << "0. Exit" << endl;
        cout << endl;


        cin >> homework;
        if (1 == homework) {
            question1();
        }
        else if (2 == homework) {
            question2();
        }
        else if (3 == homework) {
            question3();
        }
        else if (4 == homework) {
            question4();
        }
        else if (5 == homework) {
            question5();
        }
        else if (6 == homework) {
            question6();
        }
        else if (0 == homework) {
            cout << endl;
            cout << "Bye!" << endl;
            keep_going = false; // exit ASAP
        }
        else {
            cout << endl;
            cout << "Not a valid choice." << endl;
        }
    } */

    question2();

}

// Question 1
void question1() {
    string month1, month2, month3;
    double rain1, rain2, rain3;
    double average;

    cout << "Enter the first month: ";
    cin >> month1;
    cout << endl;
    cout << "Enter rainfall for " << month1 << ": ";
    cin >> rain1;
    cout << endl;

    cout << "Enter second month: ";
    cin >> month2;
    cout << endl;
    cout << "Enter rainfall for " << month2 << ": ";
    cin >> rain2;
    cout << endl;

    cout << "Enter third month: ";
    cin >> month3;
    cout << endl; 
    cout << "Enter rainfall for " << month3 << ": ";
    cin >> rain3;
    cout << endl;
    
    cout << setprecision(2) << fixed;
    average = (rain1 + rain2 + rain3) / 3;

    cout << "The average rainfall for " << month1 << ", " << month2 << ", " << month3 << " is: " << average << endl;
    cout << endl;
}

//Question 2

void question2() {

}

//Question 3
void question3() {
    const int LIMIT = 10;
    string roman_numerals [LIMIT] = {"No Roman Numeral for 0", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX", "X"};


}
/*
//Question 4
void question4() {

}

//Question 5
void question5() {

}
*/