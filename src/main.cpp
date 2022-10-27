#include <iostream>

#include "raylib.h"
#define RAYGUI_IMPLEMENTATION
#include "raygui.h"

#define SCREEN_WIDTH 1920
#define SCREEN_HEIGHT 1080

int main()
{
    bool play = true;
    bool fullscreen = true;
    bool exitB = true;

    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Educational Travelers");

    SetTargetFPS(60);
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {

        BeginDrawing();     

            ClearBackground(RAYWHITE);

            if (play) 
            {
                DrawText("Educational Travelers", SCREEN_WIDTH / 2.0f - 310, 270, 50, DARKBLUE);

                play = !GuiButton((Rectangle) { SCREEN_WIDTH / 2.0f - 224 / 2.0f, 405, 200, 100}, "Play");
                
                if (GuiButton((Rectangle) { SCREEN_WIDTH / 2.0f - 224 / 2.0f, 540, 200, 100}, "Fullscreen"))
                {
                    ToggleFullscreen();
                    if (IsWindowFullscreen()) { 
                        // SetWindowSize(GetMonitorHeight(0), GetMonitorHeight(0)); // returns wrong values
                        SetWindowSize(1920, 1200); // hardcoded values work fine!
                    } 
                    else {
                        SetWindowSize(1920, 1080);
                    }
                }

                if (GuiButton((Rectangle) { SCREEN_WIDTH / 2.0f - 224 / 2.0f, 675, 200, 100}, "Exit"))
                {
                    CloseWindow();
                }
            }
            else if (!play)
            { 
                
            }            


        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    CloseWindow();          // Close window and OpenGL context

    //--------------------------------------------------------------------------------------

    return 0;
}