// CSC 134
// M6LAB1 -- Buckshot Roulette
// Ricky Brunson
// 4/21/25

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
  
int main() {
    // Variables
    const int RED = 1;
    const int BLACK = 2;
    const int EMPTY = 0; // needed for an array

    // example 1: Array version
    int magazine[] = {BLACK, RED, BLACK, BLACK, BLACK, BLACK};
    for (int shell : magazine) {
        string shellname;        
        if (shell == BLACK) {
            shellname = "Black";
        }
        if (shell == RED) {
            shellname = "Red";
        }
        cout << "Next shell: " << shellname << endl;
    }

    // example 2: Vector version
    // .size() tells you how many items are within the vector
    // .push_back() adds item to the back (end) of the vector
    // .pop_back() removes an an item from the back (end) of the vector

    vector<int> mag;

    // load mag
    mag.push_back(RED);
    mag.push_back(BLACK);

    int num_shells = mag.size();

    // Look at shell before ejecting it
    int current_shell = mag.size();
    cout << "Next shell: " << current_shell << endl;

    // eject shell
    mag.pop_back();
    num_shells--;

    // repeat
    current_shell = mag.at(num_shells-1);
    cout << "Next shell: " << current_shell << endl;
    mag.pop_back(); // remove past shells
    cout << "Mag contains " << mag.size() << " shells." << endl;
    cout << "It could hold up to " << mag.capacity() << " before resizing." << endl;

    return 0;
}