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
        //Electrode
        Move thunder("Thunder", 90, 70);      // Move name, damage, accuracy
        Move zap_cannon("Zap Cannon", 85, 50);
        //Machamp
        Move cross_chop("Cross Chop", 75, 80);
        Move brick_break("Brick Break", 70, 100);
        Move body_slam("Body Slam", 80, 100);
        //Gengar
        Move shadow_ball("Shadow Ball", 75, 100);
        Move lick("Lick", 30, 100);
           //thunder(----)
        //Charizard
        Move fire_blast("Fire Blast", 90, 85);
        Move dragon_claw("Brick Break", 70, 100);
        Move air_slash("Air Slash", 80, 95);
        //Walrein
        Move blizzard("Blizzard", 95, 70);
        Move sheer_cold("Sheer Cold", 1000, 30);
           //body slam(----)
        //Dusclops
           //blizzard(----)
           //thunder(----)
        Move shadow_punch("Shadow Punch", 60, 100);
        Move dynamic_punch("Dynamic Punch", 100, 50);
        


    // Define Player's Teams of pokemon
    Team playerTeam({Pokemon("Charizard", 170, {fire_blast, dragon_claw, air_slash}),
                     Pokemon("Walrein", 180, {blizzard, sheer_cold, body_slam}),
                     Pokemon("Dusclops", 120, {blizzard, thunder, shadow_punch, dynamic_punch})
                    }
    );

    Team enemyTeam({Pokemon("Electrode", 120, {zap_cannon, thunder}),
                    Pokemon("Machamp", 160, {cross_chop, body_slam, brick_break}),
                    Pokemon("Gengar", 150, {shadow_ball, thunder, lick}),
                    }
    );

    // The Actual Loop for Battle
    while (playerTeam.hasAlivePokemon() && enemyTeam.hasAlivePokemon()) {
        cout << "\nYour Active Pokémon: " << playerTeam.getActivePokemon().name << endl; // Lists Player's starting pokemon
        playerTeam.getActivePokemon().displayHP(); // Finds active pokemon.displays active pokemon's hp.

        cout << "Opponent's Active Pokémon: " << enemyTeam.getActivePokemon().name << endl; // Same as above but opponent's
        enemyTeam.getActivePokemon().displayHP();

    // If Player's Pokemon has died, prompt them to switch
    if (!playerTeam.getActivePokemon().isAlive()) {
        if (playerTeam.hasAlivePokemon()) {
            cout << "\nYour Pokémon has fainted! Choose another Pokémon:\n";
            for (size_t i = 0; i < playerTeam.pokemonList.size(); i++) {  // I dont fully understand size_t, but copilot pointed it out when reviewing my code. "Prevents accidental negative values in indexing or memory sizes. Helps avoid signed/unsigned comparison issues. Ensures portability across different systems (32-bit vs 64-bit architectures)."
                if (playerTeam.pokemonList[i].isAlive()) {
                    cout << i + 1 << ". " << playerTeam.pokemonList[i].name << "\n";
                }
            }
            int switchChoice;
            cin >> switchChoice;
            playerTeam.switchPokemon(switchChoice - 1);
        } else {
            cout << "All your Pokémon have fainted! You lost the battle." << endl;
            break;
        }
    }

    // If the opponent pokemon died, automatically switch to the next available one
    if (!enemyTeam.getActivePokemon().isAlive()) {
        for (size_t i = 0; i < enemyTeam.pokemonList.size(); i++) {
            if (enemyTeam.pokemonList[i].isAlive()) {
                enemyTeam.switchPokemon(i);
                break; // This stops the loop when it finds the next available pokemon, otherwise it keep going and pick the last available pokemon
            }
        }
    }

        // Player chooses an action -- Attack or Switch Pokemon
        cout << "\nChoose an action:\n1. Attack\n2. Switch Pokémon\nChoice: ";
        int action;
        cin >> action;

        if (action == 1) {  // Player attacks
            cout << "Choose a move:\n";
            for (size_t i = 0; i < playerTeam.getActivePokemon().moves.size(); i++) { // loop prints all available move for active pokemon
                cout << i + 1 << ". " << playerTeam.getActivePokemon().moves[i].name << "\n";
            }
            int moveChoice;
            cin >> moveChoice;
            playerTeam.getActivePokemon().attack(enemyTeam.getActivePokemon(), moveChoice - 1);
        }
        else if (action == 2) {  // Player switches Pokémon
            cout << "Choose a Pokémon to switch to:\n";
            for (size_t i = 0; i < playerTeam.pokemonList.size(); i++) {
                cout << i + 1 << ". " << playerTeam.pokemonList[i].name << "\n"; // Lists each pokemon available to swap to
            }
            int switchChoice;
            cin >> switchChoice; // player input for switching
            playerTeam.switchPokemon(switchChoice - 1);
        }

        // Enemy attacks if still alive
        if (enemyTeam.getActivePokemon().isAlive()) {
            enemyTeam.getActivePokemon().attack(playerTeam.getActivePokemon(), rand() % enemyTeam.getActivePokemon().moves.size());
        }
    }

    cout << "Battle is over!" << endl;  
    return 0;
}

