#include <iostream>
using namespace std;

/*
CSC 134
M5LAB1 - Choose Your Own Adventure
[Ricky Brunson]
[3/31/25]
This template serves as a starting point
for your own program. We'll be using
void functions to tell a simple story,
where the user gets to make choices.

You can fork this template by clicking on the name above, then click the three
dots on the top right, and click 'fork repl'. This makes a copy for you to use.
*/

// Function Prototypes
// Any functions you make will need to
// be listed here, in this format, at the top.
// This is so the compiler knows to save
// room for them in the final program.
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void choice_go_in();
void choice_befriend();
void choice_traumatized();
// TODO: add more choices here

int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  // load up the main menu
  main_menu();
  // when we return here, we're done
  cout << "Thanks for playing!" << endl;
  return 0; // finished with no errors
}

void main_menu() {
  // Write a simple menu that lets the user choose 1,2, or 3, or 4 to quit.
  cout << "Main Menu" << endl;
  cout << "You're in front of a spooky old house..." << endl;
  cout << "Do you:" << endl;
  cout << "1. Try the front door" << endl;
  cout << "2. Sneak around back" << endl;
  cout << "3. Forget it, and go home" << endl;
  cout << "4. [Quit]" << endl;
  cout << "Choose: ";
  int choice;
  cin >> choice;
  if (1 == choice) {
    choice_front_door();
  } else if (2 == choice) {
    choice_back_door();
  } else if (3 == choice) {
    choice_go_home();
  } else if (4 == choice) {
    cout << "Ok, quitting game" << endl;
    cout << endl;
    return; // go back to main()
  } 
    else {
    cout << endl;
    cout << "That's not a valid choice, please try again." << endl;
    cout << endl;
    cin.ignore(); // clear the user input
    main_menu();  // try again
  }
}

// FUNCTION DEFINITIONS
// OK, we have the prototypes at the top, but
// now we have to actually write the functions.
// They go here, after main().
void choice_front_door() {
  cout << endl;
  cout << "Try the front door." << endl;
  cout << "It's locked. " << endl;
  cout << "Do you:" << endl;
  cout << "1. Check around back" << endl;
  cout << "2. Give up and go home" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_back_door();
  } else if (2 == choice) {
    choice_go_home();
  }
  else {
    cout << endl;
    cout << "That's not a valid choice, please try again." << endl;
    cout << endl;
    cin.ignore(); // clear the user input
    choice_front_door();  // try again
  }
}

void choice_back_door() {
    cout << endl;
    cout << "You go around the back and find a backdoor." << endl;
    cout << "It's not locked. " << endl;
    cout << "Do you:" << endl;
    cout << "1. Open and go in" << endl;
    cout << "2. Give up and go home" << endl;
    int choice;
    cout << "Choose: ";
    cin >> choice;
    if (1 == choice) {
      choice_go_in();
    } else if (2 == choice) {
      choice_go_home();
    }
    else {
      cout << endl;
      cout << "That's not a valid choice, please try again." << endl;
      cout << endl;
      cin.ignore(); // clear the user input
      choice_back_door();  // try again
    } 
}

void choice_go_home() {
     cout << endl;
     cout << "You go back home." << endl;
     cout << "The End."  << endl;
     cout << endl;
     return;
}

// any new choices go here
void choice_go_in() {
    cout << endl;
    cout << "You go inside and find a ..." << endl;
    cout << "👻" << endl;
    cout << "Do you:" << endl;
    cout << "1. Befriend it" << endl;
    cout << "2. Run away for your life" << endl;
    int choice;
    cout << "Choose: ";
    cin >> choice;
    if (1 == choice) {
      choice_befriend();
    } else if (2 == choice) {
      choice_traumatized();
    }
    else {
      cout << endl;
      cout << "That's not a valid choice, please try again." << endl;
      cout << endl;
      cin.ignore(); // clear the user input
      choice_go_in();  // try again
    } 
}

void choice_befriend() {
    cout << endl;
    cout << "You are now friends with a ghost" << endl;
    cout << "Cool" << endl;
    cout << "The End." << endl;
    return;
}

void choice_traumatized() {
    cout << endl;
    cout << "You scream and run back home!" << endl;
    cout << "You are now traumatized and no one believes your story about the ghost." << endl;
    cout << "The End."  << endl;
    return;
}