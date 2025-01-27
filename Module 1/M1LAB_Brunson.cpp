// CSC 134
// Hello World
// R-Brunson
// 1/27/25

#include <iostream>
using namespace std;

int main() // Program is made to stimulate an apple orchard.
{
    string name = "Ricky Brunson"; // Owner's Name
    int apples = 100; // numbers of apples owned
    double pricePerApple = 0.25; // Price per apple

// Calculates the total price of the apple purchase
    double totalPrice = apples * pricePerApple;

// prints all the information about the orchard
    cout << "Welcome to " << name;
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
