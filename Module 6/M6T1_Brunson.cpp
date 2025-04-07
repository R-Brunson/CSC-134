// CSC 134
// M6T1 -- Basic Arrays
// Ricky Brunson
// 4/7/25

#include <iostream>
#include <iomanip>
using namespace std;
  
int main()
{
   // First version -- No Array
   const int DAYS = 5;
   int cars_today;
   int cars_total = 0;
   double cars_average;

   // adding array holding car counts
    int cars[DAYS];

   cout << "Enter cars that pass for each day." << endl;
   for (int i = 0; i < DAYS; i++) {
    cout << "Day " << i + 1 << ": ";
    cin >> cars_today;
    cars[i] = cars_today; // saves today's calue in the array
    cars_total += cars_today;
   }
   cout << endl;
   cout << "Over " << DAYS << " days, total cars = " << cars_total << endl;
   cars_average = (double) cars_total / DAYS; // one of the numbers need to be a double, dont want to round off too early
   cout << "That gives us an average of " << cars_average << " cars a day." << endl;
   cout << endl;

   // Now, print the array
   for (int i = 0; i < DAYS; i++) {
    cout << "Days: " << i+1 << " Count: " << cars[i] << endl;
   }
   
}