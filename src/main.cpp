#include <iostream>

#include "../include/game.h"
#include "../include/global_variables.h"

int main()
{
    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Educational Travelers");

    Image image = LoadImage("../res/europemap.png");     // Loaded in CPU memory (RAM)
    Texture texture = LoadTextureFromImage(image);          // Image converted to texture, GPU memory (VRAM)
    UnloadImage(image);   // Once image has been converted to texture and uploaded to VRAM, it can be unloaded from RAM 

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
                pause = false;

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
                if (!pause)
                {
                    DrawTexture(texture, SCREEN_WIDTH/2 - texture.width/2, SCREEN_HEIGHT/2 - texture.height/2, WHITE);

                    Bulgaria();
                    Romania();
                    Serbia();
                    Macedonia();
                    Greece();
                    Albania();
                    Turkey();
                    Montenegro();
                    Kosovo();
                    Bosnia();
                    Moldova();
                    Ukraine();
                    Russia();
                    Belarus();
                    Finland();
                    Sweden();
                    Norway();
                    Estonia();
                    Latvia();
                    Poland();
                    Slovakia();
                    Hungary();
                    Croatia();
                    Slovenia();
                    Austria();
                    Czech();
                    Germany();
                    Netherlands();
                    Denmark();
                    Belgium();
                    Switz();
                    France();
                    Italy();
                    Spain();
                    Portugal();
                    UK();
                    Ireland();
                    Iceland();

                    if(showList)
                    {
                        DrawText("Visited countries", 0, 100, 20, DARKBLUE);
                        showList = !GuiButton((Rectangle) { 0, 0, 200, 100}, "Hide list");
                    }
                    else if (!showList)
                    {
                        showList = GuiButton((Rectangle) { 0, 0, 200, 100}, "Show list");
                    }

                    pause = GuiButton((Rectangle) { 1720, 0, 200, 100}, "Options");
                }
                else if (pause)
                {
                    pause = !GuiButton((Rectangle) { 1720, 0, 200, 100}, "Options");

                    if (GuiButton((Rectangle) { SCREEN_WIDTH / 2.0f - 224 / 2.0f, 420, 200, 100}, "Fullscreen"))
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
                    if (GuiButton((Rectangle) { SCREEN_WIDTH / 2.0f - 224 / 2.0f, 555, 200, 100}, "Exit"))
                    {
                        CloseWindow();
                    }
                }
            }            


        EndDrawing();
        SetExitKey(KEY_NULL);
        //----------------------------------------------------------------------------------
    }
    UnloadTexture(texture);

    CloseWindow();          // Close window and OpenGL context

    //--------------------------------------------------------------------------------------

    return 0;
}