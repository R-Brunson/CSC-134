// CSC 134
// M3HW1 - Gold
// Ricky Brunson
// 2/26/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
// QUESTION 1 - Chat Bot - <-----------------------------------------------
    cout << "Question 1 - Chat Bot" << endl;
    cout << endl;

    // Variable
    string input;

    // Introduction
    cout << "Hello, I'm a C++ program!" << endl;
    cout << "Do you like me? Please type yes or no. ";
    cin >> input;

    if (input == "yes" || input == "Yes") {
        cout << "That's great! I'm sure we'll get along." << endl;
    }
    else if (input == "no" || input == "No") {
        cout << "Well, maybe you'll learn to like me later." << endl;
    }
    else {
        cout << "If you're not sure… that's OK." << endl;
    }

    cout << endl;
// QUESTION 2 - Receipt Calculator - <-----------------------------------------------
    cout << "Question 2 - Receipt Calculator" << endl;
    cout << endl;
    cout << setprecision(2) << fixed;

    // Variables
    double meal_price, total_price;
    double tax = 0.08; // 8% tax
    double dine_in_tip = 0.15; // mandatory 15% tip

    // User input
    cout << "How much is the meal before tax? $" << endl;
    cin >> meal_price;

    // if / else if calculations

// QUESTION 3 - CYOA - <-----------------------------------------------
cout << "Question 3 - CYOA" << endl;
cout << endl;



// QUESTION 4 - Math Practice - <-----------------------------------------------
cout << "Question 4 - Math Practice" << endl;
cout << endl;




    return 0;
}