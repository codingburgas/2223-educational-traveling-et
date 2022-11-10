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
            *answer1str = "red, yellow and blue";
            *answer2str = "red, green and blue";
            *answer3str = "red, black and blue";
            *answer4str = "red, white and blue";

            *answer1 = true;
            *answer2 = false;
            *answer3 = false;
            *answer4 = false;
            break;
        }
    }
}

#endif