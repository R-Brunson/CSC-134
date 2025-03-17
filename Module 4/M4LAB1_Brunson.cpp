// CSC 134
// M4LAB1 - for loops
// Ricky Brunson
// 3/17/25

#include <iostream>
#include <iomanip>

using namespace std;
  
//draw a box of characters several different ways
int main() {
// regualr character can be a char, but symbols need to be a string
string pixel = "🤥";
const int WIDTH = 8;
const int HEIGHT = 5;

// 3 ways to do loops
// 1. While loops
int count = 0;
while (count < 5) {
    cout << pixel <<" ";
    count++;
}

// 2. do while loops
count = 0;
cout << endl;
do {
    cout << pixel << " ";
    count++;
} while (count < 5);

// 3. for loop
// variable name i is ok, i stands for index
cout << endl;
for (int i = 0; i < 10; i++) {
    cout << pixel << " ";
}
cout << endl;

// Vertical and Horizontal ideas 
cout << endl;
for (int i = 0; i < WIDTH; i++) { // horizontally (rows)
    cout << pixel << " ";
}

cout << endl;
for (int i = 0; i < HEIGHT; i++) { // vertically (column)
    cout << pixel << endl;
}
cout << endl;

// nested loops
// for each row
cout << "Printing a box " << WIDTH << " by " << HEIGHT << endl;
for (int h = 0; h < HEIGHT; h++) {
    //print current row
    for (int w = 0; w < WIDTH; w++) {
        cout << pixel << " ";
    }
    // goto next line
    cout << endl;
}

// User input box
int height, width;
cout << endl;
cout << "This program will print you a box of an emoji." << endl;
cout << "Please input your chosen height: ";
cin >> height;
cout << endl;
cout << "Please input your chosen width: ";
cin >> width;
cout << endl << endl;

cout << "Printing a box, " << width << " by " << height << endl << endl;
for (int h = 0; h < height; h++) {
    //print current row
    for (int w = 0; w < width; w++) {
        cout << pixel << " ";
    }
    // goto next line
    cout << endl;
}
cout << endl << endl;

return 0;
}