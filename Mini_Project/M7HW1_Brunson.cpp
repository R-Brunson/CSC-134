#include <iostream>   // For input/output handling
#include <string>     // For handling text (Pokemon names, moves, etc.)
#include <vector>     // For storing multiple Pokemon/moves
#include <cstdlib>    // For random functions (rand())
#include <ctime>      // For seeding random numbers

using namespace std;

// Move class with damage, accuracy, and name
class Move {
    public:
        string name; // Move Name
        int damage; // Damage Amount
        int accuracy; // Accuracy % (0-100)

        // pg.36 Gladdis CH13 -- Constructors
        // Constructor to initialize a move with a name, damage, and accuracy
        Move(string n, int dmg, int acc) {
            name = n;
            damage = dmg;
            accuracy = acc;
        }

        // Function that 
        bool hits() {
            int chance = rand() % 100 + 1;
            return chance <= accuracy; // returns a true bool status if the rolled chance is within that accuracy range. (accuracy 90, roll 90 or below = hits true, roll 91+ returns nothing)
        }
};

// Pokemon class represents a Pokémon with health and a set of moves
class Pokemon {
    public:
        string name; // Pokemon Name
        int health; // Pokemon Hp
        vector<Move> moves; // Stores Pokemon's Available Moves (Defined later in main?)

        // Constructor for Pokemon initialized with a name, health, and moves
        Pokemon(string n, int hp, vector<Move> m) {
            name = n; // Gives pokemon the assigned name
            health = hp; // Gives pokemon the assigned hp
            moves = m; // Gives pokemon the assigned moves
        }

        // Function for Attacking
        void attack(Pokemon &opponent, int moveChoice) {
            Move move = moves[moveChoice]; // Retrieves the chosen move's index value
    
            if (move.hits()) { // Checks if the move rolls within the accuracy range
                cout << name << " uses " << move.name << " and it deals " << move.damage << " damage!" << endl;
                opponent.takeDamage(move.damage); // Inflicts damage on opponent
            } else { // If it rolled outside the accuracy range, returns nothing and "misses"
                cout << name << " uses " << move.name << ", but it misses!" << endl;
            }
        }

        // Function for taking damage
        
}







int main {
    srand(time(0)); // Seeds random number generator using current time

    // Define Move Objects


    // Define Pokemon Objects


    // 
}
