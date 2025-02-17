// CSC 134
// M3T3 - Dice game thing?
// Ricky Brunson
// 2/17/25

#include <iostream>
#include <iomanip>
#include <cmath> // for random
#include <ctime>

using namespace std;
  
int main() {
    const int SIDES = 20; 
    int seed = time(0);  
    srand(seed); // seed the random number

// roll a few times
    int roll;
    roll = (rand() % SIDES); // rand is a large number so we take the remainder which is %
    cout << roll << endl;
  
    roll = (rand() % SIDES); // rand is a large number so we take the remainder which is %
    cout << roll << endl;

    roll = (rand() % SIDES); // rand is a large number so we take the remainder which is %
    cout << roll << endl;

    return 0;
}