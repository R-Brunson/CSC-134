// CSC 134
// M3LAB2 - Number to Letter Grades
// Ricky Brunson
// 2/26/25

#include <iostream>
#include <iomanip>

using namespace std;
  
int main()
{
// Define variables
    double num_grade; // 0-100
    string letter_grade; // A, B, C, D, F

// Ask for the number grade
    cout << "Number grade to letter grade conversion program" << endl;
    cout << "Enter the number grade: ";
    cin >> num_grade;

// find the letter grade (&& is and) (|| is or)
    if (num_grade >= 100) {
    letter_grade = "A+";
    }
    else if (num_grade >= 90 && num_grade < 100) {
        letter_grade = "A";
    }
    else if (num_grade >= 80 && num_grade < 90) {
        letter_grade = "B";
    }
    else if (num_grade >= 70 && num_grade < 80) {
        letter_grade = "C";
    }
    else if (num_grade >= 60 && num_grade < 70) {
        letter_grade = "D";
    }
    else if (num_grade >= 0 && num_grade < 60) {
        letter_grade = "F";
    }
    
// Tell user the answer
    cout << "The grade " << num_grade << " is a " << letter_grade << endl;
    cout << endl;

return 0;
}