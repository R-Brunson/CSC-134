// CSC 134
// M4T1 - saying hi 5 times, table of squares
// Ricky Brunson
// 3/10/25

#include <iostream>
#include <iomanip>

using namespace std;
  
// Purpose: Show how basic functions work.

// Declare functions here, so main() knows they exist
void show_message();
void greet_user(string name);
int double_a_number(int number);

int main() {
    cout << "Hello from main()" << endl;
    show_message(); // call function
    //done 
    string user;
    cout << "What is your name? ";
    cin >> user;
    greet_user(user); // passing the value of the user name rather than the variable itself
    cout << "Name in int main is " << user << endl;
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    int answer = double_a_number(num); // transfering value of num over to int double_a_number's "int number"
    cout << "Double that is " << answer << endl;
    return 0;
}

// Define function here
void show_message() {
    cout << "This is a message" << endl;
}

void greet_user (string name) {
    name = name + " person";
    cout << "Hello, " << name << endl; // name took on the value from user in the int main 
}

int double_a_number(int number) {
    int answer = number * 2;
    return answer; // must return an int, returns the value back to int main()
}