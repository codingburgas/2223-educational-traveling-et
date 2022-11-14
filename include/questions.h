#ifndef QUESTIONS_H
#define QUESTIONS_H

#include "global_variables.h"

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
            *question = "Transylvania is now a region in Romania. \nBefore World War I it belonged to which country?";
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
            *question = "We owe the invention of alternating current\n generators and motors to which of these people?";
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
            *question = "The Cyrillic alphabet, used today in Serbia, was invented by St. Cyril (Constantine) and St. Methodius\n in the 9th century AD. On which older alphabet was it based?";
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

        //Questions about Portugal
        case 13:
        {
            *question = "What is the population of Portugal?";
            *answer1str = "10 million";
            *answer2str = "15 million";
            *answer3str = "12 million";
            *answer4str = "20 million";

            *answer1 = true;
            *answer2 = false;
            *answer3 = false;
            *answer4 = false;
            break;
        }

        case 14:
        {
            *question = "Which is the city with the highest altitude in Portugal?";
            *answer1str = "Viseu";
            *answer2str = "Setubal";
            *answer3str = "Porto";
            *answer4str = "Guarda";

            *answer1 = false;
            *answer2 = false;
            *answer3 = false;
            *answer4 = true;
            break;
        }

        case 15:
        {
            *question = "Which ocean lies on the western coast of Portugal?";
            *answer1str = "Pacific Ocean";
            *answer2str = "Atlantic Ocean";
            *answer3str = "Indian Ocean";
            *answer4str = "Arctic Ocean";

            *answer1 = false;
            *answer2 = true;
            *answer3 = false;
            *answer4 = false;
            break;
        }

        //Questions about France
        case 16:
        {
            *question = "Which is the largest lake in France?";
            *answer1str = "Lake Annecy";
            *answer2str = "Lac du Melu";
            *answer3str = "Lac du Bourget";
            *answer4str = "Lac Vert";

            *answer1 = false;
            *answer2 = false;
            *answer3 = true;
            *answer4 = false;
            break;
        }

        case 17:
        {
            *question = "The Pyrenees mountains separate France from which country?";
            *answer1str = "Spain";
            *answer2str = "Belgium";
            *answer3str = "England";
            *answer4str = "Germany";

            *answer1 = true;
            *answer2 = false;
            *answer3 = false;
            *answer4 = false;
            break;
        }

        case 18:
        {
            *question = "What natural feature separates Germany and France?";
            *answer1str = "Bay of Biscay";
            *answer2str = "Mont Blanc";
            *answer3str = "The Alps";
            *answer4str = "The Rhine river";

            *answer1 = false;
            *answer2 = false;
            *answer3 = false;
            *answer4 = true;
            break;
        }

        //Questions about Switzerland
        case 19:
        {
            *question = "Which is the mountain in Switzerland where you can visit the Ice Palace?";
            *answer1str = "Schilthorn";
            *answer2str = "The Jungfraujoch Pass";
            *answer3str = "Titlis";
            *answer4str = "The Eiger";

            *answer1 = false;
            *answer2 = true;
            *answer3 = false;
            *answer4 = false;
            break;
        }

        case 20:
        {
            *question = "How many lakes does Switzerland have?";
            *answer1str = "around 1500 lakes";
            *answer2str = "1200";
            *answer3str = "1000";
            *answer4str = "900";

            *answer1 = true;
            *answer2 = false;
            *answer3 = false;
            *answer4 = false;
            break;
        }

        case 21:
        {
            *question = "Where does the majority of the Swiss population live?";
            *answer1str = "In Bern";
            *answer2str = "In the Alps";
            *answer3str = "In the Swiss Plateau (the Central Plateau)";
            *answer4str = "In the Jura";

            *answer1 = false;
            *answer2 = false;
            *answer3 = true;
            *answer4 = false;
            break;
        }
    }
}

#endif