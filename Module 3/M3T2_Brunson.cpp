// CSC 134
// M3T2 - Area calculator thingy - extended
// Ricky Brunson
// 2/17/25

#include <iostream>
#include <iomanip>

using namespace std;
  
int main()
{

// Variables
    double length1, width1, length2, width2;
    double area1, area2;

// Ask user rectangle dimensions
    cout << "What's the length and width of your first rectangle? Please input dimensions with a space in between. ";
    cin >> length1 >> width1;
    cout << "What's the length and width of your second rectangle? Please input dimensions with a space in between. ";
    cin >> length2 >> width2;
    cout << endl;

// Calculate area
    area1 = length1 * width1;
    area2 = length2 * width2;

// Print Area
    cout << setprecision(2) << fixed;
    cout << "The area of your first rectangle is: " << area1 << endl;
    cout << "The area of your second rectangle is: " << area2 << endl;
    cout << endl;

// Which is larger?
    if (area1 > area2) {
    cout << "The first rectangle is larger." << endl;
    cout << endl;
}
    else if (area1 < area2) {
    cout << "The second rectangle is larger." << endl;
    cout << endl;
}
    else {
    cout << "They're both the same size." << endl;
    cout << endl;
}
    return 0;
}