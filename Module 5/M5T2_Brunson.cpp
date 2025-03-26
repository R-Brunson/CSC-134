// CSC 134
// M5T2 - more practice with functions
// Ricky Brunson
// 3/26/25

#include <iostream>
#include <iomanip>

using namespace std;

void printAnswerLine(int number, int squared_value);
int square(int number);

int main() {
    
    cout << "Table of Squares" << endl;
    cout << "--------------------" << endl;

for (int i = 1; i <= 10; i++) { // repeats the input of i to get the output of int square function, also repeating the print of the value of i and the value recieved from int square() function
    int squared = square(i); // transfers value of "i" into int square function's variable of num for each loop
    printAnswerLine(i, squared); // Prints each new line of the value of i and the squared value recieved from the int sqaure function each time i is increased in the for loop
} 

    return 0;
}

void printAnswerLine(int number, int squared_value) { // int number is each input of i, and squared_value is number recieved from int squared that was calculated by the the int square function
    cout << number << "\t\t" << squared_value << endl;
}

int square(int num) { // takes value of "i" from int main and gives it to int num in the function
    int squared = num * num; // takes new int num and squares it
    return squared; // returns the new value to the int main() function's int squared
}