#ifndef COUNTRIES_H
#define COUNTRIES_H

#include "global_variables.h"

void callCountry(bool countryBool, char* countryName, bool countryTravel, int x, int y)
{
    if(countryBool)
    {
        countryBool = !GuiButton((Rectangle) { 1071, 769, 50, 25}, countryName);
        
        if (std::find(visitedCountries.begin(), visitedCountries.end(), countryName) == visitedCountries.end())
            countryTravel = false;
        else
        {
            countryBool = false;
            countryTravel = true;
        }
    
    }
    else if (!countryBool)
    {
        if (countryTravel == false && countryBool == false)
            countryTravel = travel();

        if(std::find(visitedCountries.begin(), visitedCountries.end(), countryName) == visitedCountries.end())
        {
            visitedCountries.push_back(countryName);
        }

        DrawText(countryName, x, y, 20, BLACK);
    }
}

#endif