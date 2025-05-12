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

        // Function that checks if move hits or not
        bool hits() {
            int chance = rand() % 100 + 1;
            return chance <= accuracy; // returns a true bool status if the rolled chance is within that accuracy range. (accuracy 90, roll 90 or below = hits true, roll 91+ returns nothing)
        }
};

// Function to display HP bar
void displayHPBar(int currentHP, int maxHP) {
    int barWidth = 20;  
    int filledWidth = (currentHP * barWidth) / maxHP; 

    cout << "[";
    for (int i = 0; i < barWidth; i++) {
        if (i < filledWidth) {
            cout << "█";  
        } else {
            cout << "-";  
        }
    }
    cout << "] " << currentHP << "/" << maxHP << " HP" << endl;
}

// Pokemon class represents a Pokemon with health and a set of moves
class Pokemon {
    public:
        string name; // Pokemon Name
        int health; // Pokemon Hp
        int maxHealth; // Held value of highest amount of pokemon's health
        vector<Move> moves; // Stores Pokemon's Available Moves (Defined later in main?)

        // Constructor for Pokemon initialized with a name, health, and moves
        Pokemon(string n, int hp, vector<Move> m) {
            name = n; // Gives pokemon the assigned name
            health = hp; // Gives pokemon the assigned hp
            maxHealth = hp; // Gives and Keeps track of the intial assigned HP
            moves = m; // Gives pokemon the assigned moves
        }

        // Function for Attacking
        void attack(Pokemon &opponent, int moveChoice) {
            Move move = moves[moveChoice]; // Retrieves the chosen move's index value within the vector
    
            if (move.hits()) { // Checks if the move rolls within the accuracy range
                cout << name << " uses " << move.name << " and it deals " << move.damage << " damage!" << endl;
                opponent.takeDamage(move.damage); // Inflicts damage on opponent
            } else { // If it rolled outside the accuracy range, returns nothing and "misses"
                cout << name << " uses " << move.name << ", but it misses!" << endl;
            }
        }

        // Function for taking damage
        void takeDamage(int damage) {
        health = health - damage; 
            if (health <= 0) { 
                health = 0; // sets hp to 0 if "dead", dont want to be negative 
                cout << name << " has fainted!" << endl; 
            }
        }
        
        bool isAlive() { // Checks if pokemon is still alive
            return health > 0; 
        }
    
        void displayHP() {
            displayHPBar(health, maxHealth);  // Displays pokemon's visual hp bar
        }
};

// Team Class?
class Team {
    public:
        vector<Pokemon> pokemonList;
        int activePokemon; // Tracks which Pokemon is currently in battle

        Team(vector<Pokemon> p) {
            pokemonList = p;
            activePokemon = 0; // Start with the first Pokemon
        }

        Pokemon& getActivePokemon() {
            return pokemonList[activePokemon];
        }

        void switchPokemon(int pokemon) {
            if (pokemon >= 0 && pokemon < pokemonList.size() && pokemonList[pokemon].isAlive()) {
                activePokemon = pokemon;
                cout << "Switched to " << pokemonList[activePokemon].name << "!" << endl;
            } else {
                cout << "Cannot switch! That Pokémon has fainted or does not exist." << endl;
            }
        }

        bool hasAlivePokemon() {
            for (auto& p : pokemonList) { // : allows for the loop to loop over the entire range of a vector or array
                if (p.isAlive()) return true;
            }
            return false;
        }
};

int main() {
    srand(time(0));  // Seeds the random number generator based on the current time

    // Define Move Objects
    Move scratch("Scratch", 12, 95);      // Move name, damage, accuracy
    Move quickAttack("Quick Attack", 10, 100);
    Move ember("Ember", 40, 100);
    Move thunderbolt("Thunderbolt", 20, 90);

    // Define Pokémon Teams
    Team playerTeam({Pokemon("Charmander", 90, {scratch, ember}),
                     Pokemon("Bulbasaur", 100, {scratch, quickAttack})});

    Team enemyTeam({Pokemon("Pikachu", 100, {quickAttack, thunderbolt}),
                    Pokemon("Squirtle", 110, {scratch, ember})});

    // Battle Loop (Runs until one team runs out of Pokémon)
    while (playerTeam.hasAlivePokemon() && enemyTeam.hasAlivePokemon()) {
        cout << "\nYour Active Pokémon: " << playerTeam.getActivePokemon().name << endl;
        playerTeam.getActivePokemon().displayHP();

        cout << "Opponent's Active Pokémon: " << enemyTeam.getActivePokemon().name << endl;
        enemyTeam.getActivePokemon().displayHP();

        // Player chooses an action: Attack or Switch Pokémon
        cout << "\nChoose an action:\n1. Attack\n2. Switch Pokémon\nChoice: ";
        int action;
        cin >> action;

        if (action == 1) {  // Player attacks
            cout << "Choose a move:\n";
            for (size_t i = 0; i < playerTeam.getActivePokemon().moves.size(); i++) {
                cout << i + 1 << ". " << playerTeam.getActivePokemon().moves[i].name << "\n";
            }
            int moveChoice;
            cin >> moveChoice;
            playerTeam.getActivePokemon().attack(enemyTeam.getActivePokemon(), moveChoice - 1);
        } else if (action == 2) {  // Player switches Pokémon
            cout << "Choose a Pokémon to switch to:\n";
            for (size_t i = 0; i < playerTeam.pokemonList.size(); i++) {
                cout << i + 1 << ". " << playerTeam.pokemonList[i].name << "\n";
            }
            int switchChoice;
            cin >> switchChoice;
            playerTeam.switchPokemon(switchChoice - 1);
        }

        // Enemy randomly attacks if still alive
        if (enemyTeam.getActivePokemon().isAlive()) {
            enemyTeam.getActivePokemon().attack(playerTeam.getActivePokemon(), rand() % enemyTeam.getActivePokemon().moves.size());
        }
    }

    cout << "Battle is over!" << endl;  // Displays end-of-battle message
    return 0;
}
