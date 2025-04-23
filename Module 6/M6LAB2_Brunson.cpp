// CSC 134
// M6LAB2 -- Using Data Structures
// Ricky Brunson
// 4/23/25

#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

// Define constants for directions
enum Direction {
    NORTH = 0,
    EAST = 1,
    SOUTH = 2,
    WEST = 3,
    NUM_DIRECTIONS = 4
};

// Direction strings for output
const string DIRECTION_NAMES[NUM_DIRECTIONS] = {
    "north", "east", "south", "west"
};

// Define constants for rooms
enum Room {
    ENTRANCE_HALL = 0,
    GREAT_HALL = 1,
    ARMORY = 2,
    KITCHEN = 3,
    COURTYARD = 4,
    DUNGEON = 5,
    NUM_ROOMS = 6
};

int main() {
    // Room names array
    string roomNames[NUM_ROOMS] = {
        "Entrance Hall",
        "Great Hall",
        "Armory",
        "Kitchen",
        "Courtyard",
        "Dungeon"

    };
    
    // Room descriptions array
    string roomDescriptions[NUM_ROOMS] = {
        "A grand entrance hall with a dusty chandelier hanging above. The high ceilings and intricate stonework create an imposing atmosphere. Ancient tapestries depicting scenes of battles and royal ceremonies line the walls. The polished stone floor is worn smooth by the passage of countless feet. Large wooden doors, intricately carved with symbols of the kingdom, lead to other parts of the castle.",
        "A grand hall with long tables and a roaring fireplace. The walls are adorned with banners and shields, and the air is filled with the scent of burning wood. The high ceiling is supported by wooden beams, and the floor is covered with rushes.",
        "A room filled with swords, shields, and armor. The walls are lined with weapon racks, and the floor is scattered with straw. The air smells of metal and oil, and the faint sound of clinking metal can be heard.",
        "A bustling kitchen with a large hearth and cooking pots. The room is filled with the aroma of baking bread and roasting meat. Wooden tables are covered with ingredients and utensils, and a large cauldron bubbles over the fire.",
        "An open courtyard with stone pathways and a central fountain. The garden is overgrown with wildflowers and ivy, creating a sense of untamed beauty. Birds can be heard chirping, and the air is fresh and cool.",
        "A dark, damp dungeon with chains and barred cells. The air is cold and musty, and the walls are covered in moss. The floor is uneven and littered with straw, and the sound of dripping water echoes through the space."
    };
    
    // Adjacency list using a 2D array
    // connections[from_room][direction] = to_room or -1 if no connection
    int connections[NUM_ROOMS][NUM_DIRECTIONS];
    
    // Initialize all connections to -1 (no connection)
    for (int i = 0; i < NUM_ROOMS; i++) {
        for (int j = 0; j < NUM_DIRECTIONS; j++) {
            connections[i][j] = -1;
        }
    }
    
    // Define the connections between rooms using the Room enum
    // Entrance Hall connections
    connections[ENTRANCE_HALL][NORTH] = GREAT_HALL;    // Entrance Hall -> North -> Great Hall
    connections[ENTRANCE_HALL][EAST] = ARMORY;     // Entrance Hall -> East -> ARMORY
    connections[ENTRANCE_HALL][SOUTH] = KITCHEN;         // Entrance Hall -> South -> Kitchen
    connections[ENTRANCE_HALL][WEST] = COURTYARD;      // Entrance Hall -> West -> Courtyard
    
    // Great Hall connections
    connections[GREAT_HALL][NORTH] = -1;               // No connection north
    connections[GREAT_HALL][EAST] = -1;                // No connection east
    connections[GREAT_HALL][SOUTH] = ENTRANCE_HALL;    // Great Hall -> South -> Entrance Hall
    connections[GREAT_HALL][WEST] = -1;                // No connection west
    
    // Kitchen connections
    connections[KITCHEN][NORTH] = ENTRANCE_HALL;               // No connection north
    connections[KITCHEN][EAST] = -1;                // No connection east
    connections[KITCHEN][SOUTH] = DUNGEON;         // Kitchen -> South -> Basement
    connections[KITCHEN][WEST] = -1;     // Kitchen -> West -> Entrance Hall
    
    // Courtyard connections
    connections[COURTYARD][NORTH] = -1;                // No connection north
    connections[COURTYARD][EAST] = ENTRANCE_HALL;      // Garden -> East -> Entrance Hall
    connections[COURTYARD][SOUTH] = -1;                // No connection south
    connections[COURTYARD][WEST] = -1;                 // No connection west
    
    // DUNGEON connections
    connections[DUNGEON][NORTH] = KITCHEN;         // Basement -> North -> Kitchen
    connections[DUNGEON][EAST] = -1;               // No connection east
    connections[DUNGEON][SOUTH] = -1;              // No connection south
    connections[DUNGEON][WEST] = -1;               // No connection west

    // ARMORY Hall connections
    connections[ARMORY][NORTH] = -1;    // Entrance Hall -> North -> Great Hall
    connections[ARMORY][EAST] = -1;     // Entrance Hall -> East -> ARMORY
    connections[ARMORY][SOUTH] = -1;         // Entrance Hall -> South -> Kitchen
    connections[ARMORY][WEST] = ENTRANCE_HALL;      // Entrance Hall -> West -> Courtyard
    
    // Game state
    int currentRoom = ENTRANCE_HALL; // Start in the Entrance Hall
    bool gameRunning = true;
    
    // Game loop
    while (gameRunning) {
        // Display current room information
        cout << "\nYou are in the " << roomNames[currentRoom] << endl;
        cout << roomDescriptions[currentRoom] << endl;
        
        // Show available exits
        cout << "Exits: ";
        bool hasExits = false;
        for (int dir = 0; dir < NUM_DIRECTIONS; dir++) {
            if (connections[currentRoom][dir] != -1) {
                cout << DIRECTION_NAMES[dir] << " ";
                hasExits = true;
            }
        }
        if (!hasExits) {
            cout << "none";
        }
        cout << endl;
        
        // Get player input
        string command;
        cout << "\nWhat would you like to do? ";
        cin >> command;
        
        // Process movement commands
        if (command == "north" || command == "n") {
            if (connections[currentRoom][NORTH] != -1) {
                currentRoom = connections[currentRoom][NORTH];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "east" || command == "e") {
            if (connections[currentRoom][EAST] != -1) {
                currentRoom = connections[currentRoom][EAST];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "south" || command == "s") {
            if (connections[currentRoom][SOUTH] != -1) {
                currentRoom = connections[currentRoom][SOUTH];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "west" || command == "w") {
            if (connections[currentRoom][WEST] != -1) {
                currentRoom = connections[currentRoom][WEST];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "quit" || command == "q") {
            gameRunning = false;
        } else {
            cout << "I don't understand that command." << endl;
        }
    }
    
    cout << "Thanks for playing!" << endl;
    return 0;
}