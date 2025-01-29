// CSC 134
// M2T1 - Apple Orchard Part 2
// Ricky Brunson
// 1/29/25

#include <iostream>
#include <iomanip>
using namespace std;

int main() // Program is made to stimulate an apple orchard.
{
    string farm_name = "Ricky Brunson"; // Owner's Name
    int apples = 100; // numbers of apples owned
    double pricePerApple = 0.25; // Price per apple

// new variables M2T1
    string user_name; // who is buying
    int apples_to_buy; // how many?

// Calculates the total price of all apples in stock
    double totalPrice = apples * pricePerApple;

// Greets Customer
    cout << "Hello! What's your name?";
    cin >> user_name;
    cout << "Thanks for coming by, " << user_name << "!" << endl;

// prints all the information about the orchard
    cout << "Welcome to " << farm_name;
    cout << "'s apple orchard." << endl;
    cout << "We have " << apples;
    cout << " apples in stock" << endl;
    cout << "Apples are currently $";
    cout << pricePerApple << " each." << endl;

// Sets cout for doubles to be 2 decimal places
    cout << setprecision(2) << fixed;

// Prints the totalPrice of all apples
    cout << "If you want them all, that will be $" << totalPrice << endl;
    cout << endl;

// Transaction beginning
    cout << "How many apples would you like to buy?";
    cin >> apples_to_buy;

// Calculating price of transaction
    double transactionPrice = apples_to_buy * pricePerApple;

// Finish transaction
    cout << "Easy enough, that will be $" << transactionPrice;
    cout << endl;

    return 0; // no errors
}
