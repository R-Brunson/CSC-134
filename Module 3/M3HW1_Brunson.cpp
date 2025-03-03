// CSC 134
// M3HW1 - Gold
// Ricky Brunson
// 2/26/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    /*
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
    double meal_price, total_price, tax, dine_in_fee;
    double tax_percent = 0.08; // 8% tax
    double dine_in_tip = 0.15; // mandatory 15% tip
    int choice;

    // User input
    cout << "How much is the meal before tax? $";
    cin >> meal_price;
    cout << "Was the order to go or dine in? 1 for \"To go\", 2 for \"Dine In\". ";
    cin >> choice;
    cout << endl;

    // if / else if calculations
    if (choice == 1) {
     tax = meal_price * tax_percent;
        total_price = meal_price + tax;

        cout << "--------------------------" << endl;
        cout << "Subtotal:\t$" << meal_price << endl;
        cout << "Tax:\t\t$" << tax << endl;
        cout << "--------------------------" << endl;
        cout << "Total:\t\t$" << total_price << endl;
    }
    else if (choice == 2) {
        tax = meal_price * tax_percent;
        dine_in_fee = meal_price * dine_in_tip;
        total_price = meal_price + tax + dine_in_fee;

        cout << "--------------------------" << endl;
        cout << "Subtotal:\t$" << meal_price << endl;
        cout << "Tax:\t\t$" << tax << endl;
        cout << "Dine-In Fee:\t$" << dine_in_fee << endl;
        cout << "--------------------------" << endl;
        cout << "Total:\t\t$" << total_price << endl;
    }
    else {
     cout << "Error. Invalid input.";
    }

    cout << endl;
*/
// QUESTION 3 - CYOA - <-----------------------------------------------
    // used Copilot to generate adventure game story and outcomes
    cout << "Question 3 - CYOA" << endl;
    cout << endl;

    // Variables
    string path;
    int coya_choice;

    // Introduction
    cout << "You are an adventurer exploring a mysterious forest." << endl;
    cout << "As you walk deeper into the woods, you come across a fork in the path." << endl;
    cout << endl;
    cout << "Left path: This path looks well-trodden and safe." << endl;
    cout << "Right path: This path is overgrown and looks less traveled." << endl;
    cout << endl;
    cout << "Which path do you choose? Left or Right? ";
    cin >> path;

    // The beginning of the maze of if statements
    if (path == "left" && path == "Left") { // left path
        cout << endl;
        cout << "You walk for a while and come across a sleeping dragon." << endl;
        cout << endl;
        cout << "Choice 1: Try to sneak past the dragon." << endl;
        cout << "Choice 2: Attempt to fight the dragon." << endl;
        cout << endl;
        cout << "What action do you take? Choice 1 or 2? ";
        cin >> coya_choice;

        if (coya_choice == 1) { // option 1 -- left path
            cout << endl;
            cout << "Game Over: The dragon wakes up and catches you" << endl;
        }
        else if (coya_choice == 2) { // option 2 -- left path
            cout << endl;
            cout << "Defeat: The dragon is too strong, and you are defeated." << endl;
        }
    }
    else if (path == "right" && path == "Right") { // right path
        cout << endl;
        cout << "You find a hidden treasure chest." << endl;
        cout << endl;
        cout << "Choice 1: Open the chest." << endl;
        cout << "Choice 2: Leave the chest and continue walking." << endl;
        cout << endl;
        cout << "What action do you take? Choice 1 or 2? ";
        cin >> coya_choice;

        if (coya_choice == 1) { // option 1 -- right path
            cout << endl;
            cout << "Victory: The chest contains a magical artifact that grants you victory." << endl;
        }
        else if (coya_choice == 2) { // option 2 -- right path
            cout << endl;
            cout << "Game Over: You miss out on the treasure and get lost in the forest." << endl;
        } 
    }
    
// QUESTION 4 - Math Practice - <-----------------------------------------------
    cout << "Question 4 - Math Practice" << endl;
    cout << endl;




    return 0;
}