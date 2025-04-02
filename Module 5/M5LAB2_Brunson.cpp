// M5LAB2
// Ricky Brunson
// 4/2/2025
// calculate the area of a box w/ functions

#include <iostream>
using namespace std;

// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.
void displayData(double len, double wid, double aREA);
double getWidth();
double getLength();
double getArea (double leng, double widt);


int main()
{
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors
	
   double length,    // The rectangle's length
          width,     // The rectangle's width
          area;      // The rectangle's area
          
   // Get the rectangle's length.
   length = getLength();
   
   // Get the rectangle's width.
   width = getWidth();
   
   // Get the rectangle's area.
   area = getArea(length, width);
   
   // Display the rectangle's data.
   displayData(length, width, area);
          
   return 0;
}

//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//*******************************************

void displayData (double len, double wid, double aREA) {
    cout << endl;
    cout << "Your Box's Parameters" << endl;
    cout << "-------------------------" << endl;
    cout << "Length:\t\t" << len << endl;
    cout << "Width:\t\t" << wid << endl;
    cout << "Area:\t\t" << aREA << endl;
}

double getLength() {
    cout << endl;
    cout << "Please Enter Your Box's Length: ";
    double length;
    cin >> length;
    return length;
}

double getWidth() {
    cout << endl;
    cout << "Please Enter Your Box's Width: ";
    double width;
    cin >> width;
    return width;
}

double getArea(double leng, double widt) {
double box_area = leng * widt;
return box_area;
}