// CSC 134
// M3LAB1 - Choices
// Ricky Brunson
// 2/24/25

#include <iostream>
#include <iomanip>

using namespace std;
  
int main()
{

    int choice;

// Ask user 
    cout << "You're trapped in a room with 3 doors and must pick one to escape. Which one is the safest option?" << endl;
    cout << "Door 1: The windows and floor behind the first door are all made of magnifying glass and the sunlight will probably burn him if he enters." << endl;
    cout << "Door 2: The second door hides a room full of poisonous gas." << endl;
    cout << "Door 3: A hungry lion is behind the third door." << endl;
    cout << "Do you choose Door 1, Door 2, or Door 3?" << endl;
    cout << "Type 1, 2, or 3: "; 
    cin >> choice;

// using if, make a decision based on the user's choice

    if (1 == choice) {
        cout << endl;
  	    cout << "You chose Door 1" << endl;
        cout << "You waited till it was midnight and the extreme sunlight is no longer a problem." << endl; 
        cout << "You escape and survive!" << endl;
    }
    else if (2 == choice) {
        cout << endl;
  	    cout << "You chose Door 2" << endl;
        cout << "You open the door and the poisonous gas instantly surrounds you." << endl;
        cout << "Your skin starts to fall off and you die." << endl;
    }
    else if (3 == choice) {
        cout << endl;
        cout << "You chose Door 3" << endl;
        cout << "You open the door and the lion meets his next meal." << endl;
        cout << "You get eaten by the lion and die." << endl;
    }
    else {
        cout << endl;
  	    cout << "I'm sorry, indecisiveness is not a valid choice." << endl;
    }
    cout << endl;

  // finish up
  cout << "Thanks for playing!" << endl; // this runs no matter what they choose
  cout << endl;
  return 0; // exit without error

}
