#ifndef COUNTRIES_H
#define COUNTRIES_H

#include "global_variables.h"

void callCountry(int &travelPos, bool &countryBool, const char* countryName, bool &countryTravel, float x, float y, int thisCountry, Texture2D transport)
{
    int boxSize;

    switch (thisCountry)
    {
        case 2:
        case 6:
        case 26:
        case 29:
            boxSize = 69;
            break;
        case 24:
        case 34:
            boxSize = 85;
            break;
        default:
            boxSize = 50;
    }

    if(countryBool)
    {
        countryBool = !GuiButton((Rectangle) { x, y, boxSize, 25}, countryName);
        
        if (std::find(visitedCountries.begin(), visitedCountries.end(), countryName) == visitedCountries.end()) 
        {
            countryTravel = false; 
        }
        else
        {
            countryBool = false;
            countryTravel = true;
        }
    
    }
    else if (!countryBool)
    {
 
        if(std::find(visitedCountries.begin(), visitedCountries.end(), countryName) == visitedCountries.end())
        {
            visitedCountries.push_back(countryName);

            travelPos = 0;
            currentCountry = thisCountry;
        }
        else if (countryTravel == false && countryBool == false)
        {
            if (currentCountry == thisCountry)
            {
                countryTravel = travel(); 

                travelAnimation(travelPos, x, y, lastVisited, transport);
            }
        }

        DrawText(countryName, x, y, 20, BLACK);
    }
}

#endif