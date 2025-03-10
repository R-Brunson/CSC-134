// CSC 134
// M4T1 - saying hi 5 times
// Ricky Brunson
// 3/10/25

#include <iostream>
#include <iomanip>

using namespace std;
  
int main() {
    int count = 1;

    while (count <= 5) {
        cout << count << ". Hi" << endl;
        count++;

        //count = count + 1 (same thing as above)
        //count += 1 (same thing as above) (says count is = count + number)
    }

    cout << endl;
    cout << "Done!" << endl;
    return 0;
}

// control c in terminal stops program