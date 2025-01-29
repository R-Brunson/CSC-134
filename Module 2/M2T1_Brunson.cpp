// CSC 134
// M2T1 - Apple Orchard Part 2
// Ricky Brunson
// 1/29/25

#include <iostream>
using namespace std;

int main() // Program is made to stimulate an apple orchard.
{
    string farm_name = "Ricky Brunson"; // Owner's Name
    int apples = 100; // numbers of apples owned
    double pricePerApple = 0.25; // Price per apple

// Calculates the total price of the apple purchase
    double totalPrice = apples * pricePerApple;

// prints all the information about the orchard
    cout << "Welcome to " << farm_name;
    cout << "'s apple orchard." << endl;
    cout << "We have " << apples;
    cout << " apples in stock" << endl;
    cout << "Apples are currently $";
    cout << pricePerApple << " each." << endl;

// Prints the totalPrice
    cout << "If you want them all, that will be $" << totalPrice << endl;
    cout << endl; 

    return 0; // no errors
}
