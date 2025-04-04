// CSC 134
// M4HW1 - Gold
// Ricky Brunson
// 4/4/2025

#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
bool valid_answer = false;
int initial_number, answer;
cout << "Hello, This is a Times Table Generator!" << endl;
//cout << "Please Input a Number 1-12: ";
//cin >> initial_number;

while (valid_answer == false) {
    cout << endl;
    cout << "Please Input a Number 1-12: ";
    cin >> initial_number;
    cout << endl;

    if (initial_number > 0 && initial_number <= 12) {
        cout << endl;
        valid_answer = true;
    }
    else {
        cout << "Invalid Answer. Please Try Again" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

cout << "The " << initial_number << " Times Table" << endl;
cout << "-----------------------------" << endl;

for (int i = 1; i <= 12; i++) {
    answer = initial_number * i;
    cout << initial_number << " times " << i << "\t=\t" << answer << endl;
}

cout << endl;
return 0;
}