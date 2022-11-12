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
    }
}

void questions(int questionNum, std::string* question, std::string* answer1str, std::string* answer2str, std::string* answer3str, std::string* answer4str, bool* answer1, bool* answer2, bool* answer3, bool* answer4)
{

    switch(questionNum)
    {
        //Questions about Romania
        case 1:
        {
            *question = "Which castle is located in Romania?";
            *answer1str = "Bran Castle";
            *answer2str = "Bojnice Castle";
            *answer3str = "Windsor Castle";
            *answer4str = "Edinburgh Castle";

            *answer1 = true;
            *answer2 = false;
            *answer3 = false;
            *answer4 = false;
            break;
        }

        case 2:
        {
            *question = "What are the colors of the Romanian flag?";
            *answer1str = "red, white and blue";
            *answer2str = "red, green and blue";
            *answer3str = "red, black and blue";
            *answer4str = "red, yellow and blue";

            *answer1 = false;
            *answer2 = false;
            *answer3 = false;
            *answer4 = true;
            break;
        }

        case 3:
        {
            *question = "Transylvania is now a region in Romania. Before World War I it belonged to which country?";
            *answer1str = "Serbia";
            *answer2str = "Hungary";
            *answer3str = "Bulgaria";
            *answer4str = "Ukraine";

            *answer1 = false;
            *answer2 = true;
            *answer3 = false;
            *answer4 = false;
            break;
        }

        //Questions about Hungary
        case 4:
        {
            *question = "With how many countries does Hungary border?";
            *answer1str = "6";
            *answer2str = "8";
            *answer3str = "7";
            *answer4str = "4";

            *answer1 = false;
            *answer2 = false;
            *answer3 = true;
            *answer4 = false;
            break;
        }

        case 5:
        {
            *question = "What is the main river that runs through Hungary?";
            *answer1str = "Tisza";
            *answer2str = "Danube";
            *answer3str = "Drava";
            *answer4str = "Raba";

            *answer1 = false;
            *answer2 = true;
            *answer3 = false;
            *answer4 = false;
            break;
        }

        case 6:
        {
            *question = "What is the official currency of Hungary?";
            *answer1str = "Lek";
            *answer2str = "Dram";
            *answer3str = "Manat";
            *answer4str = "Forint";

            *answer1 = false;
            *answer2 = false;
            *answer3 = false;
            *answer4 = true;
            break;
        }

        //Questions about Serbia
        case 7:
        {
            *question = "We owe the invention of alternating current generators and motors to which of these people?";
            *answer1str = "Marconi Guglielmo";
            *answer2str = "Nikola Tesla";
            *answer3str = "Thomas Alva Edison";
            *answer4str = "Westinghouse George";

            *answer1 = false;
            *answer2 = true;
            *answer3 = false;
            *answer4 = false;
            break;
        }

        case 8:
        {
            *question = "The Cyrillic alphabet, used today in Serbia, was invented by St. Cyril (Constantine) and St. Methodius in the 9th century AD. On which older alphabet was it based?";
            *answer1str = "Runes (Gothic)";
            *answer2str = "Aramaic";
            *answer3str = "Greek";
            *answer4str = "Hebrew";

            *answer1 = false;
            *answer2 = false;
            *answer3 = true;
            *answer4 = false;
            break;
        }

        case 9:
        {
            *question = "The capital of Serbia is:";
            *answer1str = "Budapest";
            *answer2str = "Sofia";
            *answer3str = "Paris";
            *answer4str = "Belgrade";

            *answer1 = false;
            *answer2 = false;
            *answer3 = false;
            *answer4 = true;
            break;
        }

        //Questions about Spain
        case 10:
        {
            *question = "What is the longest river passing in Spain?";
            *answer1str = "Ebro";
            *answer2str = "Tajo";
            *answer3str = "Guadiana";
            *answer4str = "Segre";

            *answer1 = true;
            *answer2 = false;
            *answer3 = false;
            *answer4 = false;
            break;
        }

        case 11:
        {
            *question = "Which is the peninsula where Spain is located?";
            *answer1str = "Balkan Peninsula";
            *answer2str = "The Iberian Peninsula";
            *answer3str = "Hel Peninsula";
            *answer4str = "Heracles Peninsula";

            *answer1 = false;
            *answer2 = true;
            *answer3 = false;
            *answer4 = false;
            break;
        }

        case 12:
        {
            *question = "Which one of these cities is located in Spain?";
            *answer1str = "Lisbon";
            *answer2str = "Vienna";
            *answer3str = "Madrid";
            *answer4str = "London";

            *answer1 = false;
            *answer2 = false;
            *answer3 = true;
            *answer4 = false;
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
        for (int i = 0; i < fileContent.length(); i++)
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
                visitedCountries.push_back(arr[i]);
            }
        }
        runOnlyOneTime++;

        countriesInput.close();
    }

    // std::ofstream countriesOutput;
    // countriesOutput.open("countries.txt");
    // int numberOfCountries = visitedCountries.size();

    // for (int i = 0; i < numberOfCountries; i++)
    // {
    //     countriesOutput << visitedCountries[i] << " ";
    // }
    // countriesOutput.close();
}

#endif