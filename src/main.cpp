#include "../include/game.h"
#include "../include/countries.h"
#include "../include/global_variables.h"
#include "../include/questions.h"

//Header file for custom style of button
#include "../include/button.h"

int main()
{
    srand(time(NULL));
    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Educational Travelers");

    //Calling the custom style of button
    GuiLoadStyleButton();

    // fix button realinement when entering game
    ToggleFullscreen();

    Image image = LoadImage("../res/europemap.png");     // Loaded in CPU memory (RAM)
    Texture texture = LoadTextureFromImage(image);          // Image converted to texture, GPU memory (VRAM)
    UnloadImage(image);   // Once image has been converted to texture and uploaded to VRAM, it can be unloaded from RAM 

    Image planeImage = LoadImage("../res/plane.png");
    Texture planeTexture = LoadTextureFromImage(planeImage);
    UnloadImage(planeImage);

    Image carAndTrainImage = LoadImage("../res/car_and_train.png");
    Texture carAndTrainTexture = LoadTextureFromImage(carAndTrainImage);
    UnloadImage(carAndTrainImage);

    // where in image certain texture is located
    Rectangle trainInImage = { 0.0f, 0.0f, 100, 40 };
    Rectangle carInImage = { 0.0f, 40.0f, 100, 40 };
    Rectangle planeInImage = { 0.0f, 0.0f, 100, 40 };

    SetTargetFPS(60);
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {

        BeginDrawing();     
         
            ClearBackground(RAYWHITE);

            if (play) 
            {
                GuiSetStyle(DEFAULT, TEXT_SIZE, 20);

                if (GuiButton((Rectangle) { 1620, 0, 300, 100}, "Delete data from save files"))
                {
                    clearSaveFile();
                }

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
                GuiSetStyle(DEFAULT, TEXT_SIZE, 10);
                balance();
                countries();
                questionAnswered();
                
                while (noEnd)
                    highscore();

                if (!pause)
                {
                    DrawTexture(texture, SCREEN_WIDTH/2 - texture.width/2, SCREEN_HEIGHT/2 - texture.height/2, WHITE);
                    
                    // Start scene
                    start();

                    // Your current balance
                    DrawText(TextFormat("Your balance: %i lv", money), SCREEN_WIDTH / 2.0f - 310, 0, 50, DARKBLUE);

                    // Functionality for all countries
                    for (int i = 0; i < 38; i++)
                        callCountry(countriesBool[i], countriesNames[i], countriesTravelFunction[i], countryCoords[0][i], countryCoords[1][i], i, planeTexture, carAndTrainTexture, carInImage, trainInImage, planeInImage);

                    if(showList)
                    {
                        DrawText("Visited countries", 0, 100, 20, DARKBLUE);
                        
                        int numberOfCountries = visitedCountries.size();

                        int newline = 0;
                        int counter = 1;
                        for (int i = 0; i < numberOfCountries; i++)
                        {
                            if (visitedCountries[i] != "")
                            {    
                                DrawText(TextFormat("%i. %s", counter, visitedCountries[i].c_str()), 0, 120 + newline, 20, DARKBLUE);
                                newline += 20;
                                counter++;
                            }
                        }

                        GuiSetStyle(DEFAULT, TEXT_SIZE, 20);
                        showList = !GuiButton((Rectangle) { 0, 0, 200, 100}, "Hide list");
                        GuiSetStyle(DEFAULT, TEXT_SIZE, 10);

                    }
                    else if (!showList)
                    {
                        GuiSetStyle(DEFAULT, TEXT_SIZE, 20);
                        showList = GuiButton((Rectangle) { 0, 0, 200, 100}, "Show list");
                        GuiSetStyle(DEFAULT, TEXT_SIZE, 10);
                    }

                    if(quiz)
                    {
                        DrawText(TextFormat("Your score: %i", score), 1750, 960, 20, DARKBLUE);
                        GuiSetStyle(DEFAULT, TEXT_SIZE, 20);
                        quiz = !GuiButton((Rectangle) {1720, 980, 200, 100}, "Quiz");
                        GuiSetStyle(DEFAULT, TEXT_SIZE, 10);
                        if (questionAnsweredNum == 20)
                            quiz = false;
                    }
                    else if (!quiz)
                    {
                        if (questionAnsweredNum != 20)
                        {
                            if (answered)
                                questionNum = rand() % 12 + 1;

                            answered = false;

                            DrawRectangle(400, 380, 1200, 400, WHITE);
                            std::string question, answer1str, answer2str, answer3str, answer4str;
                            bool answer1, answer2, answer3, answer4;

                            questions(questionNum, &question, &answer1str, &answer2str, &answer3str, &answer4str, &answer1, &answer2, &answer3, &answer4);

                            int lengthOfQuestion = question.length();

                            DrawText(TextFormat("%s", question.c_str()), 415, 400, 25, DARKBLUE);
                            DrawText(TextFormat("%i/20", questionAnsweredNum), 415, 740, 25, DARKBLUE);

                               
                            if (GuiButton((Rectangle) { SCREEN_WIDTH / 2.0f - 224 / 2.0f, 470, 150, 50}, answer1str.c_str())) { if (answer1) {money += 100;} quiz = true; answered = true; questionAnsweredNum++;}
                            else if (GuiButton((Rectangle) { SCREEN_WIDTH / 2.0f - 224 / 2.0f, 530, 150, 50}, answer2str.c_str())) { if (answer2) {money += 100;} quiz = true; answered = true; questionAnsweredNum++;}
                            else if (GuiButton((Rectangle) { SCREEN_WIDTH / 2.0f - 224 / 2.0f, 590, 150, 50}, answer3str.c_str())) { if (answer3) {money += 100;} quiz = true; answered = true; questionAnsweredNum++;}
                            else if (GuiButton((Rectangle) { SCREEN_WIDTH / 2.0f - 224 / 2.0f, 650, 150, 50}, answer4str.c_str())) { if (answer4) {money += 100;} quiz = true; answered = true; questionAnsweredNum++;}                       
                        }
                    }

                    GuiSetStyle(DEFAULT, TEXT_SIZE, 20);
                    pause = GuiButton((Rectangle) { 1720, 0, 200, 100}, "Options");
                    GuiSetStyle(DEFAULT, TEXT_SIZE, 10);
                }
                else if (pause)
                {
                    GuiSetStyle(DEFAULT, TEXT_SIZE, 20);

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