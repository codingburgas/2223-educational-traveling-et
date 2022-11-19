#ifndef GAME_H
#define GAME_H

#include "global_variables.h"

void start()
{
    switch (readMess)
    {
        case 1:
        {
            DrawText("You start from Bulgaria and your goal is to visit \n as many countries as you can until you run out of money", 1320, 500, 15, BLACK);
            if (GuiButton((Rectangle) { 1520, 550, 50, 50}, "Next")) readMess++;
            break;
        }
        case 2:
        {
            DrawText("You start with 300 lv and to keep earning money you have to click the \n \"Quiz\" button and answer the question correctly", 1320, 500, 15, BLACK);
            if (GuiButton((Rectangle) { 1520, 550, 50, 50}, "Next")) readMess++;
            break;
        }
        case 3:
        {
            DrawText("When clicking on a country you will be asked \n how would you like to travel to that country.", 1320, 500, 15, BLACK);
            if (GuiButton((Rectangle) { 1520, 550, 50, 50}, "Next")) readMess++;
            break;
        }
        case 4:
        {
            DrawText("Travelling by plane gives you 3 points, by \n car gives you 2 points and by train it gives you 1 point.", 1320, 500, 15, BLACK);
            if (GuiButton((Rectangle) { 1520, 550, 50, 50}, "Next")) readMess++;
            break;
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

        if (temp > money)
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

    money.clear();
    countries.clear();
    questions.clear();

    if (money.is_open())
        money << "300";     

    if (questions.is_open())
        questions << "1";
        
    money.close();
    countries.close();
    questions.close();
}

void travelAnimation(float toCountryX, float toCountryY, int lastCountryI, Texture2D plane, Texture2D carAndTrain, Rectangle carSize, Rectangle trainSize, Rectangle planeSize)
{
    if (travelType == 0)
       return;

    // save current country
    float fromCountryX = countryCoords[0][lastCountryI];
    float fromCountryY = countryCoords[1][lastCountryI];

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
            {DrawTexturePro(plane, planeSize, position, origin, rotation, WHITE); std::cout << rotation << " ";}
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

bool travel()
{
    bool hideTravelFunction = false;

    DrawRectangle(1350, 300, 350, 500, WHITE);

    DrawText("How would you like \n to travel?", 1420, 360, 25, DARKBLUE);

    if (haveTravel)
    {
        plane = rand() % 131 + 100;
        car = rand() % 81 + 50;
        train = rand() % 61 + 50;
    }

    haveTravel = false;

    if (GuiButton((Rectangle) { 1405, 470, 150, 50}, "Travel with plane") && money - plane > 0) { money -= plane; haveTravel = true; hideTravelFunction = true; travelType = 1; }
    else if (GuiButton((Rectangle) { 1405, 530, 150, 50}, "Travel with car") && money - car > 0) { money -= car; haveTravel = true; hideTravelFunction = true; travelType = 2; }
    else if (GuiButton((Rectangle) { 1405, 590, 150, 50}, "Travel with train") && money - train > 0) { money -= train; haveTravel = true; hideTravelFunction = true; travelType = 3; }

    DrawText(TextFormat("Cost: %i lv", plane), 1560, 483, 25, DARKBLUE);
    DrawText(TextFormat("Cost: %i lv", car), 1560, 543, 25, DARKBLUE);
    DrawText(TextFormat("Cost: %i lv", train), 1560, 603, 25, DARKBLUE);

    readMess = 5;

    std::ofstream moneyOutput;
    moneyOutput.open("money.txt");

    moneyOutput << money;
    
    moneyOutput.close();

    return hideTravelFunction;
}

#endif