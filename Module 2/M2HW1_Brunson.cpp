// CSC 134
// M2HW1 - Gold
// Ricky Brunson
// 2/10/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << setprecision(2) << fixed;
// QUESTION 1 - Banking Transactions - <-----------------------------------------------
    cout << "Question #1" << endl;
    cout << endl;
    // Variable for inputs
    string first_name, last_name, acc_number;
    double deposit, withdraw;
    double account_balance = 0;

    // Asking User inputs
    cout << "Hello, Welcome to Nonexistent Banking!" << endl;
    cout << "Please state your first and last name: ";
    cin >> first_name >> last_name;
    cout << "Please input your Account Number: ";
    cin >> acc_number;
    cout << endl;

    string full_name = first_name + " " + last_name;

    cout << "Login Successful!" << endl;
    cout << endl;
    cout << "Name: "<< full_name << endl;
    cout << "Account Number:\t" << acc_number << endl;
    cout << "---------------------------------" << endl;
    cout << "Account Balance:\t$" << account_balance << endl;
    cout << "---------------------------------" << endl;
    cout << endl;
    cout << "How much would you like to deposit? $"; // Deposit prompt
    cin >> deposit;
    cout << "$" << deposit << " has been added to your account balance." << endl;

    account_balance = account_balance + deposit; // adding deposit amount to balance
    cout << endl;

    cout << "Your New Account Balance is:\t$" << account_balance << endl;
    cout << endl; 

    cout << "How much would you like to withdraw? $"; // withdraw prompt
    cin >> withdraw;
    cout << "$" << withdraw << " has been taken from your account balance." << endl;
    cout << endl;

    account_balance = account_balance - withdraw;

    cout << "Your New Account Balance is:\t$" << account_balance << endl;
    cout << "----------------------------------------------------" << endl;
    cout << endl;

// QUESTION 2 - Updated Crate Storage Calculator - <-----------------------------------------------
    cout << "Question 2" << endl;
    cout << endl;

    // Constants for how much it costs to produce and how much its sold for
    const double COST_PCF = 0.3; // PCF = Per cubic foot
    const double CHARGE_PCF = 0.52; //How much we charge the customer per cost 

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
    cout << "----------------------------------------------" << endl;
cout << endl;
return 0;

// QUESTION 2 - Pizza - <-----------------------------------------------









    return 0;
}