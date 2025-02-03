// CSC 134
// M2T2 - Receipt Calculator
// Ricky Brunson
// 1/29/25

#include <iostream>
#include <iomanip>
using namespace std;

int main() // simple receipt calculator
{
// Variables
    string storeName = "\"The $5.99 Diner\"";
    int numMeal; // Number of meals ordered
    double mealPrice = 5.99; // Price of meal
    double mealTotal; // How much the total meal costs without tax
    double taxRate = 0.08; // 8% tax rate
    double taxAmount; // $ tax owed
    double total; // Meal + Tax

// taking customer's order and 
    cout << "Welcome to " << storeName << "." << endl;
    cout << "At " << storeName << ", we sell all of our meals at $" << mealPrice << "!" << endl;
    cout << "Please take a look at the menue and write down what you'd like." << endl;
    cout << "How many meals would you like? ";
    cin >> numMeal;
    cout << endl;

// Calculate meal total, tax amount, and total
    mealTotal = numMeal * mealPrice;
    taxAmount = taxRate * mealTotal;
    total = mealTotal + taxAmount;

// Printing Receipt
    cout << setprecision(2) << fixed;
    cout << "Thank you for dining at " << storeName << ", here is your receipt!" << endl;
    cout << endl;
    cout << "The $5.99 Diner" << endl;
    cout << "--------------------------" << endl;
    cout << "Subtotal:\t$" << mealTotal << endl;
    cout << "Tax:\t\t$" << taxAmount << endl;
    cout << "--------------------------" << endl;
    cout << "Total:\t\t$" << total << endl;
    cout << endl;
    cout << "Have a good day!";

cout << endl;
return 0;
}