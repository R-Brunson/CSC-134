
// CSC 134
// M7T2 -- Rectangles (GOLD)
// Ricky Brunson
// 4/30/25

#include <iostream>
#include <iomanip>
#include <vector>
#include "rectangle.h" // "" when its my own file
using namespace std;

int main() {

    double len, wid, area;

    cout << "Rectangle Calculator" << endl;
    cout << "Rectangle 1" << endl;

    do {
        cout << "Enter Width: ";
        cin >> wid;
        
        if (wid <= 0) {
            cout << endl;
            cout << "Width must be greater than 0. Please Try Again." << endl;
            cout << endl;
        }
    } while (wid <= 0);

    cout << endl;

    do {
        cout << "Enter Length: ";
        cin >> len;

        if (len <= 0) {
            cout << endl;
            cout << "Length must be greater than 0. Please Try Again." << endl;
            cout << endl;
        }
    } while (len <= 0);

    Rectangle r1 = Rectangle();
    r1.setWidth(wid);
    r1.setLength(len);

    cout << endl;
    cout << "The Area is: " << r1.getArea() << endl;

    return 0;
}