#ifndef COUNTRIES_H
#define COUNTRIES_H

#include "global_variables.h"

void Romania()
{
    if(romania)
    {
        romania = !GuiButton((Rectangle) { 1071, 769, 50, 25}, "Romania");       
    }
    else if (!romania)
    {
        if(std::find(visitedCountries.begin(), visitedCountries.end(), "Romania") == visitedCountries.end())
        {
            visitedCountries.push_back("Romania");
        }  

        DrawText("Romania", 1071, 769, 20, BLACK);
    }
}

void Serbia()
{
    if(serbia)
    {
        serbia = !GuiButton((Rectangle) { 973, 825, 50, 25}, "Serbia");       
    }
    else if (!serbia)
    {
        if(std::find(visitedCountries.begin(), visitedCountries.end(), "Serbia") == visitedCountries.end())
        {
            visitedCountries.push_back("Serbia");
        }  

        DrawText("Serbia", 973, 825, 20, BLACK);
    }    
}

void Macedonia()
{
    if(GuiButton((Rectangle) { 1020, 897, 65, 25}, "Macedonia"))
    {
                            
    }      
}

void Greece()
{
    if(GuiButton((Rectangle) { 1025, 941, 50, 25}, "Greece"))
    {
                            
    }      
}

void Albania()
{
    if(GuiButton((Rectangle) { 960, 911, 60, 25}, "Albania"))
    {
                            
    }      
}

void Turkey()
{
    if(GuiButton((Rectangle) { 1279, 916, 50, 25}, "Turkey"))
    {
                            
    }      
}

void Montenegro()
{
    if(GuiButton((Rectangle) { 925, 873, 70, 25}, "Montenegro"))
    {
                            
    }       
}

void Kosovo()
{
    if(GuiButton((Rectangle) { 997, 875, 50, 25}, "Kosovo"))
    {
                            
    }   
}

void Bosnia()
{
    if(GuiButton((Rectangle) { 890, 830, 40, 25}, "B & H"))
    {
                            
    }       
}

void Moldova()
{
    if(GuiButton((Rectangle) { 1165, 730, 55, 25}, "Moldova"))
    {
                            
    }   
}

void Ukraine()
{
    if(GuiButton((Rectangle) { 1200, 670, 50, 25}, "Ukraine"))
    {
                            
    }   
}

void Russia()
{
    if(GuiButton((Rectangle) { 1250, 400, 45, 25}, "Russia"))
    {
                            
    }   
}

void Belarus()
{
    if(GuiButton((Rectangle) { 1095, 575, 50, 25}, "Belarus"))
    {
                            
    }   
}

void Finland()
{
    if(GuiButton((Rectangle) { 930, 370, 50, 25}, "Finland"))
    {
                            
    }   
}

void Sweden()
{
    if(GuiButton((Rectangle) { 765, 380, 50, 25}, "Sweden"))
    {
                            
    }   
}

void Norway()
{
    if(GuiButton((Rectangle) { 660, 420, 50, 25}, "Norway"))
    {
         
    }   
}

void Estonia()
{
    if(GuiButton((Rectangle) { 995, 455, 55, 25}, "Estonia"))
    {
                            
    }   
}

void Latvia()
{
    if(GuiButton((Rectangle) { 1000, 490, 50, 25}, "Latvia"))
    {
                            
    }   
}

void Poland()
{
    if(GuiButton((Rectangle) { 900, 640, 50, 25}, "Poland"))
    {
                            
    }   
}

void Slovakia()
{
    if(GuiButton((Rectangle) { 905, 730, 60, 25}, "Slovakia"))
    {
                            
    }   
}

void Hungary()
{
    if(GuiButton((Rectangle) { 915, 768, 60, 25}, "Hungary"))
    {
                            
    }   
}

void Croatia()
{
    if(GuiButton((Rectangle) { 855, 805, 55, 25}, "Croatia"))
    {
                            
    }      
}

void Slovenia()
{
    if(GuiButton((Rectangle) { 790, 805, 60, 25}, "Slovenia"))
    {
                            
    }   
}

void Austria()
{
    if(GuiButton((Rectangle) { 800, 760, 55, 25}, "Austria"))
    {
                            
    }   
}

void Czech()
{
    if(GuiButton((Rectangle) { 790, 700, 80, 25}, "Czech republic"))
    {
                            
    }   
}

void Germany()
{
    if(GuiButton((Rectangle) { 660, 690, 50, 25}, "Germany"))
    {
                            
    }   
}

void Netherlands()
{
    if(GuiButton((Rectangle) { 560, 640, 70, 25}, "Netherlands"))
    {
                            
    }   
}

void Denmark()
{
    if(GuiButton((Rectangle) { 660, 550, 55, 25}, "Denmark"))
    {
                            
    }   
}

void Belgium()
{
    if(GuiButton((Rectangle) { 550, 690, 55, 25}, "Belgium"))
    {
                            
    }   
}

void Switz()
{
    if(GuiButton((Rectangle) { 630, 790, 60, 25}, "Switzerland"))
    {
                            
    }   
}

void France()
{
    if(GuiButton((Rectangle) { 480, 777, 50, 25}, "France"))
    {
                            
    }   
}

void Italy()
{
    if(GuiButton((Rectangle) { 710, 860, 45, 25}, "Italy"))
    {
                            
    }   
}

void Spain()
{
    if(GuiButton((Rectangle) { 260, 930, 45, 25}, "Spain"))
    {
                            
    }   
}

void Portugal()
{
    if(GuiButton((Rectangle) { 105, 920, 55, 25}, "Portugal"))
    {
                            
    }   
}

void UK()
{
    if(GuiButton((Rectangle) { 390, 620, 50, 25}, "England"))
    {
                            
    }   
}

void Ireland()
{
    if(GuiButton((Rectangle) { 235, 585, 50, 25}, "Ireland"))
    {
                            
    }   
}

void Iceland()
{
    if(GuiButton((Rectangle) { 200, 250, 50, 25}, "Iceland"))
    {
                            
    }   
}

void Lithuania()
{
    if(GuiButton((Rectangle) { 965, 545, 50, 25}, "Lithuania"))
    {
                            
    }   
}

#endif