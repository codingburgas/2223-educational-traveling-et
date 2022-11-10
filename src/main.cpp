#include <iostream>
#include <vector>
#include <algorithm>

#include "../include/game.h"
#include "../include/countries.h"
#include "../include/global_variables.h"

int main()
{
    srand(time(NULL));
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
                    
                    // Start scene
                    start();

                    // Your current balance
                    DrawText(TextFormat("Your balance: %i lv", money), SCREEN_WIDTH / 2.0f - 310, 0, 50, DARKBLUE);

                    // Functionality for all countries
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
                    Lithuania();

                    if(showList)
                    {
                        DrawText("Visited countries", 0, 100, 20, DARKBLUE);
                        
                        int numberOfCountries = visitedCountries.size();

                        int newline = 0;
                        for (int i = 0; i < numberOfCountries; i++)
                        {
                            DrawText(TextFormat("%i. %s", i + 1, visitedCountries[i].c_str()), 0, 120 + newline, 25, DARKBLUE);
                            newline += 25;
                        }

                        showList = !GuiButton((Rectangle) { 0, 0, 200, 100}, "Hide list");

                    }
                    else if (!showList)
                    {
                        showList = GuiButton((Rectangle) { 0, 0, 200, 100}, "Show list");
                    }

                    if(quiz)
                    {
                        quiz = !GuiButton((Rectangle) {1720, 980, 200, 100}, "Quiz");
                    }
                    else if (!quiz)
                    {
                        if (answered)
                            questionNum = rand() % 2 + 1;

                        answered = false;

                        DrawRectangle(400, 380, 1200, 400, WHITE);
                        std::string question, answer1str, answer2str, answer3str, answer4str;
                        bool answer1, answer2, answer3, answer4;

                        questions(questionNum, &question, &answer1str, &answer2str, &answer3str, &answer4str, &answer1, &answer2, &answer3, &answer4);

                        int lengthOfQuestion = question.length();

                        DrawText(TextFormat("%s", question.c_str()), 400 + lengthOfQuestion * 8, 400, 25, DARKBLUE);

                        if (answer1 == true)
                        {
                            if (GuiButton((Rectangle) { SCREEN_WIDTH / 2.0f - 224 / 2.0f, 470, 150, 50}, answer1str.c_str())) { money += 100; quiz = true; answered = true;}
                            else if (GuiButton((Rectangle) { SCREEN_WIDTH / 2.0f - 224 / 2.0f, 530, 150, 50}, answer2str.c_str())) { quiz = true; answered = true;}
                            else if (GuiButton((Rectangle) { SCREEN_WIDTH / 2.0f - 224 / 2.0f, 590, 150, 50}, answer3str.c_str())) { quiz = true; answered = true;}
                            else if (GuiButton((Rectangle) { SCREEN_WIDTH / 2.0f - 224 / 2.0f, 650, 150, 50}, answer4str.c_str())) { quiz = true; answered = true;}
                        }
                        else if (answer2 == true)
                        {
                            if (GuiButton((Rectangle) { SCREEN_WIDTH / 2.0f - 224 / 2.0f, 470, 150, 50}, answer1str.c_str())) { quiz = true; answered = true;}
                            else if (GuiButton((Rectangle) { SCREEN_WIDTH / 2.0f - 224 / 2.0f, 530, 150, 50}, answer2str.c_str())) { money += 100; quiz = true; answered = true;}
                            else if (GuiButton((Rectangle) { SCREEN_WIDTH / 2.0f - 224 / 2.0f, 590, 150, 50}, answer3str.c_str())) { quiz = true; answered = true;}
                            else if (GuiButton((Rectangle) { SCREEN_WIDTH / 2.0f - 224 / 2.0f, 650, 150, 50}, answer4str.c_str())) { quiz = true; answered = true;}
                        }
                        else if (answer3 == true)
                        {
                            if (GuiButton((Rectangle) { SCREEN_WIDTH / 2.0f - 224 / 2.0f, 470, 150, 50}, answer1str.c_str())) { quiz = true; answered = true;}
                            else if (GuiButton((Rectangle) { SCREEN_WIDTH / 2.0f - 224 / 2.0f, 530, 150, 50}, answer2str.c_str())) { quiz = true; answered = true;}
                            else if (GuiButton((Rectangle) { SCREEN_WIDTH / 2.0f - 224 / 2.0f, 590, 150, 50}, answer3str.c_str())) { money += 100; quiz = true; answered = true;}
                            else if (GuiButton((Rectangle) { SCREEN_WIDTH / 2.0f - 224 / 2.0f, 650, 150, 50}, answer4str.c_str())) { quiz = true; answered = true;}
                        }
                        else if (answer4 == true)
                        {
                            if (GuiButton((Rectangle) { SCREEN_WIDTH / 2.0f - 224 / 2.0f, 470, 150, 50}, answer1str.c_str())) { quiz = true; answered = true;}
                            else if (GuiButton((Rectangle) { SCREEN_WIDTH / 2.0f - 224 / 2.0f, 530, 150, 50}, answer2str.c_str())) { quiz = true; answered = true;}
                            else if (GuiButton((Rectangle) { SCREEN_WIDTH / 2.0f - 224 / 2.0f, 590, 150, 50}, answer3str.c_str())) { quiz = true; answered = true;}
                            else if (GuiButton((Rectangle) { SCREEN_WIDTH / 2.0f - 224 / 2.0f, 650, 150, 50}, answer4str.c_str())) { money += 100; quiz = true; answered = true;}
                        }

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
                else if (!quiz)
                {

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