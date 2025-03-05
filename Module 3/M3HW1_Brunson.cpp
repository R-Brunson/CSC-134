// CSC 134
// M3HW1 - Gold
// Ricky Brunson
// 2/26/2025

#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
using namespace std;

void question1();
void question2();
void question3();
void question4();

int main()
{
    int homework;
    bool keep_going = true;

    while (true == keep_going) {
        cout << "M3HW1" << endl;
        cout << "1. Question 1" << endl;
        cout << "2. Question 2" << endl;
        cout << "3. Question 3" << endl;
        cout << "4. Question 4" << endl;
        cout << "0. Exit" << endl;
        
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
        else if (0 == homework) {
            cout << "Bye!" << endl;
            keep_going = false; // exit ASAP
        }
        else {
            cout << "Not a valid choice." << endl;
        }
    }
    return 0; 
}

void question1() {
    // QUESTION 1 - Chat Bot - <-----------------------------------------------
    cout << endl;
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
}
void question2() {
    // QUESTION 2 - Receipt Calculator - <-----------------------------------------------
    cout << endl;
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
}
void question3() {
    // QUESTION 3 - CYOA - <-----------------------------------------------
    // used Copilot to generate adventure game story and outcomes
    cout << endl;
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
    if (path == "left" || path == "Left") { // left path
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
            cout << endl;
        }
        else if (coya_choice == 2) { // option 2 -- left path
            cout << endl;
            cout << "Defeat: The dragon is too strong, and you are defeated." << endl;
            cout << endl;
        }
    }
    else if (path == "right" || path == "Right") { // right path
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
            cout << endl;
        }
        else if (coya_choice == 2) { // option 2 -- right path
            cout << endl;
            cout << "Game Over: You miss out on the treasure and get lost in the forest." << endl;
            cout << endl;
        } 
    }
}
void question4() {
    // QUESTION 4 - Math Practice - <-----------------------------------------------
    cout << endl;
    cout << "Question 4 - Math Practice" << endl;
    cout << endl;

    // Randomizer
    int seed = time(0);
    srand(seed);

    // Variables/Calculations
    const int MAX = 10; // numbers from 1-10
    int num1, num2, answer, user_answer;
    num1 = (rand() % MAX) + 1; // Divide by MAX, and just keep the remainder
    num2 = (rand() % MAX) + 1; // Divide by MAX, and just keep the remainder
    answer = num1 + num2;

    // User prompt
    cout << "What is " << num1 << " plus " << num2 << "?" << endl;
    cin >> user_answer;

    // if statements
    if (user_answer == answer) {
        cout << endl;
        cout << "Correct!";
        cout << endl;
    }
    else {
        cout << endl;
        cout << "Incorrect." << endl;
        cout << "The Correct Answer was " << answer << endl;
        cout << endl;
    }
}
