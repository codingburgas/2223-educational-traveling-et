#ifndef COUNTRIES_H
#define COUNTRIES_H

#include "global_variables.h"

void Romania()
{
    if(romania)
    {
        romania = !GuiButton((Rectangle) { 1071, 769, 50, 25}, "Romania"); 

        for (auto i : visitedCountries)
        {
            if (i == "Romania")
            {
                romania = false;
                break;
            }
        }

        hideTravelFunction = false;     
    }
    else if (!romania)
    {
        if (!hideTravelFunction && romania == false)
            travel();

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
        for (auto i : visitedCountries)
        {
            if (i == "Serbia")
            {
                serbia = false;
                break;
            }
        }      

        hideTravelFunction = false;   
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
    if(macedonia)
    {
        macedonia = !GuiButton((Rectangle) { 1020, 897, 65, 25}, "Macedonia");
        for (auto i : visitedCountries)
        {
            if (i == "Macedonia")
            {
                macedonia = false;
                break;
            }
        }         
        hideTravelFunction = false;
    }
    else if (!macedonia)
    {
        if(std::find(visitedCountries.begin(), visitedCountries.end(), "Macedonia") == visitedCountries.end())
        {
            visitedCountries.push_back("Macedonia");
        }  

        DrawText("Macedonia", 1020, 897, 20, BLACK);
    }      
}

void Greece()
{
    if(greece)
    {
        greece = !GuiButton((Rectangle) { 1025, 941, 50, 25}, "Greece"); 

        for (auto i : visitedCountries)
        {
            if (i == "Greece")
            {
                greece = false;
                break;
            }
        }

        hideTravelFunction = false;     
    }
    else if (!greece)
    {
        if (!hideTravelFunction && greece == false)
            travel();

        if(std::find(visitedCountries.begin(), visitedCountries.end(), "Greece") == visitedCountries.end())
        {
            visitedCountries.push_back("Greece");
        }

        DrawText("Greece", 1025, 941, 20, BLACK);
    }
}

void Albania()
{
    if(Albania)
    {
        albania = !GuiButton((Rectangle) {960, 911, 60, 25}, "Albania"); 

        for (auto i : visitedCountries)
        {
            if (i == "Albania")
            {
                albania = false;
                break;
            }
        }

        hideTravelFunction = false;     
    }
    else if (!albania)
    {
        if (!hideTravelFunction && albania == false)
            travel();

        if(std::find(visitedCountries.begin(), visitedCountries.end(), "Albania") == visitedCountries.end())
        {
            visitedCountries.push_back("Albania");
        }

        DrawText("Albania", 960, 911, 20, BLACK);
    }
}

void Turkey()
{
    if(GuiButton((Rectangle) { 1279, 916, 50, 25}, "Turkey"))
    {
        turkey = !GuiButton((Rectangle) { 1279, 916, 50, 25}, "Turkey"); 

        for (auto i : visitedCountries)
        {
            if (i == "Turkey")
            {
                turkey = false;
                break;
            }
        }

        hideTravelFunction = false;     
    }
    else if (!turkey)
    {
        if (!hideTravelFunction && turkey == false)
            travel();

        if(std::find(visitedCountries.begin(), visitedCountries.end(), "Turkey") == visitedCountries.end())
        {
            visitedCountries.push_back("Turkey");
        }

        DrawText("Turkey", 1279, 916, 20, BLACK);
    }
}

void Montenegro()
{
    if(Montenegro)
    {
        montenegro = !GuiButton((Rectangle) { 925, 873, 70, 25}, "Montenegro"); 

        for (auto i : visitedCountries)
        {
            if (i == "Montenegro")
            {
                montenegro = false;
                break;
            }
        }

        hideTravelFunction = false;     
    }
    else if (!montenegro)
    {
        if (!hideTravelFunction && montenegro == false)
            travel();

        if(std::find(visitedCountries.begin(), visitedCountries.end(), "Montenegro") == visitedCountries.end())
        {
            visitedCountries.push_back("Montenegro");
        }

        DrawText("Montenegro", 925, 873, 20, BLACK);
    } 
}

void Kosovo()
{
    if(Kosovo)
    {
        kosovo = !GuiButton((Rectangle) { 997, 875, 50, 25}, "Kosovo"); 

        for (auto i : visitedCountries)
        {
            if (i == "Kosovo")
            {
                kosovo = false;
                break;
            }
        }

        hideTravelFunction = false;     
    }
    else if (!kosovo)
    {
        if (!hideTravelFunction && kosovo == false)
            travel();

        if(std::find(visitedCountries.begin(), visitedCountries.end(), "Kosovo") == visitedCountries.end())
        {
            visitedCountries.push_back("Kosovo");
        }

        DrawText("Kosovo", 997, 875, 20, BLACK);
    } 
}

void Bosnia()
{
    if(bosnia)
    {
        bosnia = !GuiButton((Rectangle) { 890, 830, 40, 25}, "B & H"); 

        for (auto i : visitedCountries)
        {
            if (i == "B & H")
            {
                bosnia = false;
                break;
            }
        }

        hideTravelFunction = false;     
    }
    else if (!bosnia)
    {
        if (!hideTravelFunction && bosnia == false)
            travel();

        if(std::find(visitedCountries.begin(), visitedCountries.end(), "B & H") == visitedCountries.end())
        {
            visitedCountries.push_back("B & H");
        }

        DrawText("B & H", 890, 830, 20, BLACK);
    }    
}

void Moldova()
{
    if(moldova)
    {
        moldova = !GuiButton((Rectangle) { 1165, 730, 55, 25}, "Moldova"); 

        for (auto i : visitedCountries)
        {
            if (i == "Moldova")
            {
                moldova = false;
                break;
            }
        }

        hideTravelFunction = false;     
    }
    else if (!moldova)
    {
        if (!hideTravelFunction && moldova == false)
            travel();

        if(std::find(visitedCountries.begin(), visitedCountries.end(), "Moldova") == visitedCountries.end())
        {
            visitedCountries.push_back("Moldova");
        }

        DrawText("Moldova", 1165, 730, 20, BLACK);
    }    
}

void Ukraine()
{
    if(ukraine)
    {
        ukraine = !GuiButton((Rectangle) { 1200, 670, 50, 25}, "Ukraine"); 

        for (auto i : visitedCountries)
        {
            if (i == "Ukraine")
            {
                ukraine = false;
                break;
            }
        }

        hideTravelFunction = false;     
    }
    else if (!ukraine)
    {
        if (!hideTravelFunction && ukraine == false)
            travel();

        if(std::find(visitedCountries.begin(), visitedCountries.end(), "Ukraine") == visitedCountries.end())
        {
            visitedCountries.push_back("Ukraine");
        }

        DrawText("Ukraine", 1200, 670, 20, BLACK);
    }    
}

void Russia()
{
    if(russia)
    {
          russia = !GuiButton((Rectangle) { 1250, 400, 45, 25}, "Russia"); 

        for (auto i : visitedCountries)
        {
            if (i == "Russia")
            {
                russia = false;
                break;
            }
        }

        hideTravelFunction = false;     
    }
    else if (!russia)
    {
        if (!hideTravelFunction && russia == false)
            travel();

        if(std::find(visitedCountries.begin(), visitedCountries.end(), "Russia") == visitedCountries.end())
        {
            visitedCountries.push_back("Russia");
        }

        DrawText("Russia", 1250, 400, 20, BLACK);
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