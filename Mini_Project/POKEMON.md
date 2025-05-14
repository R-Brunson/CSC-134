# Project Goal
Simulated Pokemon Fight 

# AI
Copilot

# AI Prompts
1. I am recreating a Pokémon fight in C++. Please give me a list of all components I would need to recreate a Pokémon fight.
Response: "✅ Pokémon Class – Defines attributes like name, health, moves, and type. ✅ Move Class – Represents attacks with attributes like damage, accuracy, and effects. ✅ Health System – Handles HP reductions, fainting, and HP bars. ✅ Turn-Based System – Alternates between player and opponent actions. ✅ Battle Loop – Keeps the fight going until a winner is determined. ✅ Basic AI (Opponent Logic) – Chooses moves, possibly based on health or type advantage. ✅ User Input Handling – Allows the player to select moves."

2. What C++ libraries would I need?
Response: " #include <iostream>   // For input/output handling
            #include <string>     // For handling text (Pokemon names, moves, etc.)
            #include <vector>     // For storing multiple Pokemon/moves
            #include <cstdlib>    // For random functions (rand())
            #include <ctime>      // For seeding random numbers "

3. How to create a rand() that gives me a range between 1 - 100. How do i set up a srand?
Response: "int randomNumber = rand() % 100 + 1; // Generates a random number between 1 and 100"

4. How would I go about implementing a visual HP bar in text form?
Response: 
" // Function to display HP bar
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
} "

5. How would I go about making the enemy choose a random attack out of their available moves?
Response: "Use a rand() % by the number of moves.

6. I don't remember and can't find the exact prompt, but i discovered the use of "&" symbol as a reference indicator. If you dont pass an object with a reference, it apparently creates a clone of the original for that instance. Using & allows the function to directly modify the object, otherwise any damage wouldnt be tracked properly.



# Ideas/Plans
Pokemon X
Multiple Pokemon X

Moves X
Multiple Moves per pokemon X
Moves having a power and accuracy system X
Element Resistances/Weaknesses --

Switching Pokemon X
Using Items --

-- Future Ideas
Pokemon stats like attack and defense that plays a part in damage calculations, also speed for attack order
