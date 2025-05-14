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

7. Asked the AI to give me a list of Pokemon fights in pokemon emerald, I chose the Drake fight from the elite four. Then i asked for a list of all the pokemon, moves, and stats in that fight.
Response: "
Pokémon	Level	HP	Move	Power	Accuracy

Shelgon	50	    140	Rock Tomb	50	80%
Dragon Claw	80	100%
Crunch	80	100%
Protect	—	—

Altaria	50	140	Dragon Dance	—	—
Dragon Breath	60	100%
Aerial Ace	60	—
Earthquake	100	100%

Kingdra	52	150	Smokescreen	—	100%
Surf	95	100%
Dragon Breath	60	100%
Ice Beam	90	100%

Flygon	53	160	Earthquake	100	100%
Dragon Claw	80	100%
Flamethrower	90	100%
Sandstorm	—	—

Salamence	55	170	Dragon Claw	80	100%
Flamethrower	90	100%
Crunch	80	100%
Fly	70	95% "

8. 


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
