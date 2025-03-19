/*******************************************************************************************
*
*   raylib [core] example - Basic window
*
*   Welcome to raylib!
*
*   To test examples, just press F6 and execute 'raylib_compile_execute' script
*   Note that compiled executable is placed in the same folder as .c file
*
*   To test the examples on Web, press F6 and execute 'raylib_compile_execute_web' script
*   Web version of the program is generated in the same folder as .c file
*
*   You can find all basic examples on C:\raylib\raylib\examples folder or
*   raylib official webpage: www.raylib.com
*
*   Enjoy using raylib. :)
*
*   Example originally created with raylib 1.0, last time updated with raylib 1.0
*
*   Example licensed under an unmodified zlib/libpng license, which is an OSI-certified,
*   BSD-like license that allows static linking with closed source software
*
*   Copyright (c) 2013-2024 Ramon Santamaria (@raysan5)
*

M4T2 - Raylib
Brunson
3/19/25

We'll need to:
- Decide on a screen size 
- Decide what we're repeating (rectangle, png, etc.)
- Create a loop to draw a ROW of them
- Create a nested loop to draw a GRID (rows and columns) of them

    Color colors[MAX_COLORS_COUNT] = {
        DARKGRAY, MAROON, ORANGE, DARKGREEN, DARKBLUE, DARKPURPLE, DARKBROWN,
        GRAY, RED, GOLD, LIME, BLUE, VIOLET, BROWN, LIGHTGRAY, PINK, YELLOW,
        GREEN, SKYBLUE, PURPLE, BEIGE };

********************************************************************************************/

#include "raylib.h"

// Draw one critter
void DrawGhost(int c_x, int c_y, int tile_width, int tile_height, Color bodyColor, Color eyeColor, Color pupilColor); 

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 600;
    const Color bodyColors[] = {RED, PINK, ORANGE, SKYBLUE}; // Fixed-size array
    const int ghostColorsCount = sizeof(bodyColors) / sizeof(bodyColors[0]); // Number of colors

    Color eyeColor = WHITE;
    Color pupilColor = BLACK;

    int currentColorIndex = 0;
    int tile_width = 40;
    int tile_height = 30;
    int c_x = 0;
    int c_y = 0; // Current location of critter
    int frameCounter = 0;

    InitWindow(screenWidth, screenHeight, "m4t2 - raylib example");

    SetTargetFPS(60); // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose()) // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        c_x += 1;
        c_y += 1;
        frameCounter++;

        // Change ghost color every second
        if (frameCounter >= 60) { // 60 frames = 1 second
        currentColorIndex = (currentColorIndex + 1) % ghostColorsCount; // Cycle through colors
        frameCounter = 0; // Reset the counter
        }
        
        // Reset position when all ghosts leave the screen
    if (c_x > screenWidth || c_y > screenHeight) {
        c_x = 0; // Reset to initial x position
        c_y = 0; // Reset to initial y position
    }
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(BLACK);

            // Draw our ghost with the current body color
            /*
            for (int column=0; column<screenHeight; column += tile_height * 2) {
                for (int row=0; row<screenWidth; row += tile_width * 2) {
                    DrawGhost(c_x + row, c_y + column, tile_width / 1.3, tile_height, bodyColors[currentColorIndex], eyeColor, pupilColor);
                }
            }
            */
            
            // Nested loop to draw multiple ghosts
        for (int column = 0; column < screenHeight; column += tile_height * 2) {
            for (int row = 0; row < screenWidth; row += tile_width * 2) {
                // Wrap-around logic for the block
                int ghost_x = (c_x + row) % screenWidth; // Wrap horizontally
                int ghost_y = (c_y + column) % screenHeight; // Wrap vertically

                DrawGhost(ghost_x, ghost_y, tile_width / 1.3, tile_height, bodyColors[currentColorIndex], eyeColor, pupilColor);
            }
        }

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow(); // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}

// Other function definitions here
void DrawGhost(int c_x, int c_y, int tile_width, int tile_height, Color bodyColor, Color eyeColor, Color pupilColor) {
    // Draw the main body (rounded top and rectangular bottom)
    int radius = tile_width / 2;
    DrawRectangle(c_x, c_y + radius, tile_width, tile_height - radius, bodyColor); // Body rectangle
    DrawCircle(c_x + radius, c_y + radius, radius, bodyColor); // Rounded top

    // Create the wavy bottom
    int wave_count = 4; // Number of humps
    int wave_spacing = tile_width / wave_count; // Space each wave evenly
    for (int i = 0; i < wave_count; i++) {
        int x_offset = c_x + (i * wave_spacing);
        DrawCircle(x_offset + (wave_spacing / 2), c_y + tile_height, wave_spacing / 2, bodyColor);
    }

    // Draw the eyes
    int left_eye_x = c_x + (tile_width / 4); // 1/4 across
    int right_eye_x = c_x + (3 * tile_width / 4); // 3/4 across
    int eye_y = c_y + (tile_height / 3); // 1/3 down
    int eye_radius = tile_width / 8; // Eye size
    DrawCircle(left_eye_x, eye_y, eye_radius, eyeColor); // Left eye
    DrawCircle(right_eye_x, eye_y, eye_radius, eyeColor); // Right eye

    // Draw pupils
    int pupil_radius = eye_radius / 2;
    DrawCircle(left_eye_x, eye_y, pupil_radius, pupilColor); // Left pupil
    DrawCircle(right_eye_x, eye_y, pupil_radius, pupilColor); // Right pupil
}