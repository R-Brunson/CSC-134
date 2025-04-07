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

   cout << "Enter cars that pass for each day." << endl;
   for (int i = 0; i < DAYS; i++) {
    cout << "Day " << i + 1 << ": ";
    cin >> cars_today;
    cars_total += cars_today;
   }
   cout << endl;
   cout << "Over " << DAYS << " days, total cars = " << cars_total << endl;
   cars_average = cars_total / DAYS;
   cout << "That gives us an average of " << cars_average << " cars a day." << endl;
   cout << endl;
   
}