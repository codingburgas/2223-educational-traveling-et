#ifndef GAME_H
#define GAME_H

#include "global_variables.h"

void start()
{
    if (finishGame == false)
    {
        switch (readMess)
        {
            case 1:
            {
                DrawText("You start from Bulgaria and your goal is to visit \n as many countries as you can until you run out of money", 1320, 500, 19, BLACK);
                if (GuiButton((Rectangle) { 1520, 550, 50, 50}, "Next")) readMess++;
                break;
            }
            case 2:
            {
                DrawText("You start with 300 lv and to keep earning money you have to click the \n \"Quiz\" button and answer the question correctly", 1320, 500, 19, BLACK);
                if (GuiButton((Rectangle) { 1520, 550, 50, 50}, "Next")) readMess++;
                break;
            }
            case 3:
            {
                DrawText("When clicking on a country you will be asked \n how would you like to travel to that country.", 1320, 500, 19, BLACK);
                if (GuiButton((Rectangle) { 1520, 550, 50, 50}, "Next")) readMess++;
                break;
            }
            case 4:
            {
                DrawText("Travelling by plane gives you 3 points, by \n car gives you 2 points and by train it gives you 1 point.", 1320, 500, 19, BLACK);
                if (GuiButton((Rectangle) { 1520, 550, 50, 50}, "Next")) readMess++;
                break;
            }
        }
    }
}

void finish(Font titleFonts)
{
    // indicate to callCountries to stop drawing buttons
    finishGame = true;

    // where to draw game over pop up
    Rectangle finishPopUp = { 460, 200, 1000, 620 };
    DrawRectangle(460, 200, 1000, 620, Color{ 0, 211, 223, 255} );
    DrawRectangleLinesEx(finishPopUp, 5, BLACK);

    // text location
    Vector2 textLocation1 = { 540, 400 };
    Vector2 textLocation2 = { 530, 430 };

    DrawTextEx(titleFonts, "   GAME OVER   ", textLocation1, 40, 40, BLACK);
    DrawTextEx(titleFonts, "ENTER YOUR NAME", textLocation2, 40, 40, BLACK);

    Rectangle textBox = { 850, 470, 225, 50 };
    bool mouseOnText = false;

    if (CheckCollisionPointRec(GetMousePosition(), textBox)) 
        mouseOnText = true;
    else 
        mouseOnText = false;

    if (mouseOnText)
    {
        // Set the window's cursor to the I-Beam
        SetMouseCursor(MOUSE_CURSOR_IBEAM);
            
        // Get char pressed (unicode character) on the queue
        int key = GetCharPressed();

        // Check if more characters have been pressed on the same frame
        while (key > 0)
        {
            // NOTE: Only allow keys in range [32..125]
            if ((key >= 32) && (key <= 125) && (letters < 10))
            {
                name[letters] = (char)key;
                name[letters+1] = '\0'; // Add null terminator at the end of the string.
                letters++;
            }

            key = GetCharPressed();  // Check next character in the queue
        }

        if (IsKeyPressed(KEY_BACKSPACE))
        {
            letters--;
            if (letters < 0) letters = 0;
            name[letters] = '\0';
        }
    }
    else SetMouseCursor(MOUSE_CURSOR_DEFAULT);

    if (mouseOnText) framesCounter++;
    else framesCounter = 0;

    DrawRectangleRec(textBox, BLACK);
    if (mouseOnText) 
        DrawRectangleLines((int)textBox.x, (int)textBox.y, (int)textBox.width, (int)textBox.height, RAYWHITE);
    else 
        DrawRectangleLines((int)textBox.x, (int)textBox.y, (int)textBox.width, (int)textBox.height, GRAY);

    DrawText(name, (int)textBox.x + 5, (int)textBox.y + 8, 40, RAYWHITE);

    if (mouseOnText)
    {
        if (letters < 10)
        {
            // Draw blinking underscore char
            if (((framesCounter/20)%2) == 0) 
                DrawText("_", (int)textBox.x + 8 + MeasureText(name, 40), (int)textBox.y + 12, 40, RAYWHITE);
        }
    }
}

void balance()
{
    std::ifstream moneyInput;
    moneyInput.open("money.txt");

    if (moneyInput.is_open())
    {
        int temp;
        moneyInput >> temp;

        money = temp;

        moneyInput.close();
    }

    int moneyFromFile = money;
    moneyInput >> moneyFromFile;

    std::ofstream moneyOutput;
    moneyOutput.open("money.txt");

    if (money < moneyFromFile)
        moneyOutput << moneyFromFile;
    else
        moneyOutput << money;
    moneyOutput.close();
}

void highscore()
{
    std::ifstream scoreInput;
    scoreInput.open("score.txt");

    int scoreFromFile;
    scoreInput >> scoreFromFile;

    std::ofstream scoreOutput;
    scoreOutput.open("score.txt");

    if (score < scoreFromFile)
        scoreOutput << scoreFromFile;
    else
        scoreOutput << score;
    scoreOutput.close();
    scoreInput.close();

    score = scoreFromFile;
}

void countries()
{
    std::ifstream countriesInput;
    countriesInput.open("countries.txt");
    if (countriesInput.is_open())
    {

        std::stringstream buffer;
        buffer << countriesInput.rdbuf();

        std::string fileContent;
        fileContent = buffer.str();

        int length = 1;
        for (size_t i = 1; i < fileContent.length(); i++)
        {
            if (fileContent[i] == ' ')
                length++;
        }

        std::string arr[50];
        std::stringstream ssin(fileContent);

        for (int i = 0; ssin.good() && i < length; ++i)
            ssin >> arr[i];

        if (runOnlyOneTime == 0)
        {
            for (int i = 0; i < length; i++)
            {
                if (arr[i] != " ")
                    visitedCountries.push_back(arr[i]); 
            }
        }
        runOnlyOneTime++;

        countriesInput.close();
    }

    int numberOfCountries = visitedCountries.size();

    if (numberOfCountries > 1)
    {
        std::ofstream countriesOutput;
        countriesOutput.open("countries.txt");
        
        for (int i = 0; i < numberOfCountries; i++)
        {
            countriesOutput << visitedCountries[i];
            if (visitedCountries[i] != " ")
                countriesOutput << " "; 
        }
        countriesOutput.close();
    }
}

void questionAnswered()
{
    std::ifstream questionsInput;
    questionsInput.open("questionAnswered.txt");

    if (questionsInput.is_open())
    {
        int temp;
        questionsInput >> temp;

        if (temp > questionAnsweredNum)
            questionAnsweredNum = temp;

        questionsInput.close();
    }

    int quetionsFromFile = questionAnsweredNum;
    questionsInput >> quetionsFromFile;

    std::ofstream quetionsOutput;
    quetionsOutput.open("questionAnswered.txt");
    if (questionAnsweredNum < quetionsFromFile)
        quetionsOutput << quetionsFromFile;
    else
        quetionsOutput << questionAnsweredNum;
}

void clearSaveFile()
{
    std::fstream money;
    money.open("money.txt", std::ofstream::out | std::ofstream::trunc);

    std::fstream countries;
    countries.open("countries.txt", std::ofstream::out | std::ofstream::trunc);
    
    std::fstream questions;
    questions.open("questionAnswered.txt", std::ofstream::out | std::ofstream::trunc);

    std::fstream score;
    score.open("score.txt", std::ofstream::out | std::ofstream::trunc);
    
    money.clear();
    countries.clear();
    questions.clear();
    score.clear();

    if (money.is_open())
        money << "300";     

    if (questions.is_open())
        questions << "1";

    if (score.is_open())
        score << "0";
        
    money.close();
    countries.close();
    questions.close();
    score.close();
}

void travelAnimation(float toCountryX, float toCountryY, Texture2D plane, Texture2D carAndTrain, Rectangle carSize, Rectangle trainSize, Rectangle planeSize)
{
    // wait until travel type has been chosen to run animation
    if (travelType == 0)
       return;

    // save current country
    float fromCountryX = countryCoords[0][lastVisited];
    float fromCountryY = countryCoords[1][lastVisited];

    // find distance between both countries
    float distanceX = toCountryX - fromCountryX;
    float distanceY = toCountryY - fromCountryY;

    // frames taken to move transport texture
    int steps = 90;

    // slowly move transport texture from countryA to countryB
    fromCountryX += travelPos * distanceX / steps;
    fromCountryY += travelPos * distanceY / steps;   

    // save coordinates in rectangle that can be rotated
    Rectangle position = { fromCountryX, fromCountryY, 100, 40 };

    // center of rectangle
    Vector2 origin = { 50, 20 };

    // amount of rotation
    int rotation = atan2(distanceY, distanceX) * 180 / PI;
    if (distanceX < 0)
         rotation += 180;
    else
    {
        planeSize.x += planeSize.width;
        planeSize.width = -planeSize.width;

        carSize.x += carSize.width;
        carSize.width = -carSize.width;

        trainSize.x += trainSize.width;
        trainSize.width = -trainSize.width;
    }

    // draw transport until frames end
    if (travelPos < steps)
    {
        ++travelPos; 

        if (travelType == 1)      // draw plane from plane.png
            {DrawTexturePro(plane, planeSize, position, origin, rotation, WHITE);}
        else if (travelType == 2) // draw only the car texture from car_and_train.png
            DrawTexturePro(carAndTrain, carSize, position, origin, rotation, WHITE);
        else if (travelType == 3) // draw only the train texture from car_and_train.png
            DrawTexturePro(carAndTrain, trainSize, position, origin, rotation, WHITE);
    }
    else
    {
        lastVisited = currentCountry;
        travelPos = 0;
        travelType = 0;
    }
}

bool travel(Font titleFonts)
{
    bool hideTravelFunction = false;
    
    if (haveTravel)
    {
        plane = rand() % 131 + 100;
        car = rand() % 81 + 50;
        train = rand() % 61 + 50;
    }

    if (questionAnsweredNum >= 20 && money - plane < 0 && money - car < 0 && money - train < 0)
    {
        finish(titleFonts);
        return 0;
    }

    Rectangle travelPopUp = { 1350, 300, 400, 450 };
    DrawRectangle(1350, 300, 400, 450, Color{ 252, 190, 104, 200} );
    DrawRectangleLinesEx(travelPopUp, 5, BLACK);

    DrawText("How would you like \n to travel?", 1420, 360, 25, BLACK);

    haveTravel = false;

    if (GuiButton((Rectangle) { 1400, 470, 150, 50}, "Travel with plane") && money - plane >= 0) { money -= plane; haveTravel = true; score += 3; hideTravelFunction = true; travelType = 1; }
    else if (GuiButton((Rectangle) { 1400, 530, 150, 50}, "Travel with car") && money - car >= 0) { money -= car; haveTravel = true; score += 2; hideTravelFunction = true; travelType = 2; }
    else if (GuiButton((Rectangle) { 1400, 590, 150, 50}, "Travel with train") && money - train >= 0) { money -= train; haveTravel = true;score += 1; hideTravelFunction = true; travelType = 3; }

    DrawText(TextFormat("Cost: %i lv", plane), 1560, 483, 25, BLACK);
    DrawText(TextFormat("Cost: %i lv", car), 1560, 543, 25, BLACK);
    DrawText(TextFormat("Cost: %i lv", train), 1560, 603, 25, BLACK);

    readMess = 5;

    std::ofstream moneyOutput;
    moneyOutput.open("money.txt");

    moneyOutput << money;
    
    moneyOutput.close();

    return hideTravelFunction;
}

#endif