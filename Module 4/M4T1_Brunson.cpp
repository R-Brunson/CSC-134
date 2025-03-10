// CSC 134
// M4T1 - saying hi 5 times, table of squares
// Ricky Brunson
// 3/10/25

#include <iostream>
#include <iomanip>

using namespace std;
  
int main() {
    // Part 1
    int count = 1;

    while (count <= 5) {
        cout << count << ". Hi" << endl;
        count++;

        //count = count + 1 (same thing as above)
        //count += 1 (same thing as above) (says count is = count + number)
    }

    cout << endl;
    cout << "Done!" << endl;

    //Part 2
    const int MIN_NUM = 1;
    const int MAX_NUM = 10;

    cout << "Table of Squares" << endl;
    cout << "--------------------" << endl;
    int num = MIN_NUM;
    int sq; // num squared

    while (num <= MAX_NUM) {
        sq = num * num;
        cout << num << "\t\t" << sq << endl;
        num++;
    }

    cout << endl;
    //optional 3
    bool is_valid = false;
    int choice;

    while (is_valid == false) {
        cout << "Press 1 or 2 to finish." << endl;
        cin >> choice;
        cout << endl;
        if (choice == 1) {
            cout << "You picked 1" << endl;
            is_valid = true;
            cout<< endl;
        }
        else if (choice == 2) {
            cout << "You picked 2" << endl;
            is_valid = true;
            cout<< endl;
        }
        else {
            cout << "Sorry, not valid. Try again." << endl;
            cout<< endl;
        }
    }
    cout << "Goodbye" << endl;
    cout << endl;
    return 0;
}

// control c in terminal stops program