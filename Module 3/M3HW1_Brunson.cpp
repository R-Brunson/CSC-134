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

    if (input == "yes") {
        cout << "That's great! I'm sure we'll get along." << endl;
    }
    else if (input == "no") {
        cout << "Well, maybe you'll learn to like me later." << endl;
    }
    else {
        cout << "If you're not sure… that's OK." << endl;
    }

    cout << endl;
// QUESTION 2 - Receipt Calculator - <-----------------------------------------------
cout << "Question 2 - Receipt Calculator" << endl;
cout << endl;



// QUESTION 3 - CYOA - <-----------------------------------------------
cout << "Question 3 - CYOA" << endl;
cout << endl;



// QUESTION 4 - Math Practice - <-----------------------------------------------
cout << "Question 4 - Math Practice" << endl;
cout << endl;




    return 0;
}