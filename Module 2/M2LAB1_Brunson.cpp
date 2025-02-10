// CSC 134
// M2LAB1 - Crate Calculator
// Ricky Brunson
// 2/5/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main() // Program is made to calculate volume, cost, customer price, and profit
{
// Constants for how much it costs to produce and how much its sold for
    const double COST_PCF = 0.23; // PCF = Per cubic foot
    const double CHARGE_PCF = 0.5; //How much we charge the customer per cost 

// Variables for box calculations
    double length, width, height;
    double volume;
    double cost;
    double charge;
    double profit;

// Prompt to input crate's dimensions
    cout << "Crate Financial Analysis Calculator" << endl;
    cout << endl;
    cout << "Enter the dimensions of the crate (in feet):" << endl;
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;

// Calculation of volume, cost to make, how much you charge, and profit
    volume = length * width * height;
    cost = volume * COST_PCF;
    charge = volume * CHARGE_PCF;
    profit = charge - cost;

    cout << setprecision(2) << fixed;

// Print results
    cout << endl;
    cout << "The volume of the crate is " << volume << " cubic feet." << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Cost to Build:\t\t$" << cost << endl;
    cout << "Customer's Price:\t$" << charge << endl;
    cout << "Profit:\t\t\t$" << profit << endl;

cout << endl;
return 0;
}