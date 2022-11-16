#ifndef COUNTRIES_H
#define COUNTRIES_H

#include "global_variables.h"

bool hideTravelFunctionRomania = true;
bool hideTravelFunctionSerbia = true;
bool hideTravelFunctionMacedonia = true;
bool hideTravelFunctionGreece = true;
bool hideTravelFunctionAlbania = true;
bool hideTravelFunctionTurkey = true;
bool hideTravelFunctionMontenegro = true;
bool hideTravelFunctionKosovo = true;
bool hideTravelFunctionBosnia = true;
bool hideTravelFunctionMoldova = true;
bool hideTravelFunctionUkraine = true;
bool hideTravelFunctionRussia = true;
bool hideTravelFunctionBelarus = true;
bool hideTravelFunctionFinland = true;
bool hideTravelFunctionSweden = true;
bool hideTravelFunctionNorway = true;
bool hideTravelFunctionEstonia = true;
bool hideTravelFunctionLatvia = true;
bool hideTravelFunctionPoland = true;
bool hideTravelFunctionSlovakia = true;
bool hideTravelFunctionHungary = true;
bool hideTravelFunctionCroatia = true;
bool hideTravelFunctionSlovenia = true;
bool hideTravelFunctionAustria = true;
bool hideTravelFunctionCzech = true;
bool hideTravelFunctionGermany = true;
bool hideTravelFunctionNetherlands = true;
bool hideTravelFunctionDenmark = true;
bool hideTravelFunctionBelgium = true;
bool hideTravelFunctionSwitz = true;
bool hideTravelFunctionFrance = true;
bool hideTravelFunctionItaly = true;
bool hideTravelFunctionSpain = true;
bool hideTravelFunctionPortugal = true;
bool hideTravelFunctionUK = true;
bool hideTravelFunctionIreland = true;
bool hideTravelFunctionIceland = true;
bool hideTravelFunctionLithuania = true;

void Romania()
{
    if(romania)
    {
        romania = !GuiButton((Rectangle) { 1071, 769, 50, 25}, "Romania");
        
        if (std::find(visitedCountries.begin(), visitedCountries.end(), "Romania") == visitedCountries.end())
            hideTravelFunctionRomania = false;
        else
        {
            romania = false;
            hideTravelFunctionRomania = true;
        }
    
    }
    else if (!romania)
    {
        if (hideTravelFunctionRomania == false && romania == false)
            hideTravelFunctionRomania = travel();

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

        if (std::find(visitedCountries.begin(), visitedCountries.end(), "Serbia") == visitedCountries.end())
            hideTravelFunctionSerbia = false;
        else
        {
            serbia = false;
            hideTravelFunctionSerbia = true;
        }  
    }
    else if (!serbia)
    {
        if (hideTravelFunctionSerbia == false && serbia == false)
           hideTravelFunctionSerbia = travel();

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

        if (std::find(visitedCountries.begin(), visitedCountries.end(), "Macedonia") == visitedCountries.end())
            hideTravelFunctionMacedonia = false;
        else
        {
            macedonia = false;
            hideTravelFunctionMacedonia = true;
        }       
    }
    else if (!macedonia)
    {
        if (hideTravelFunctionMacedonia == false && macedonia == false)
            hideTravelFunctionMacedonia = travel();

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

        if (std::find(visitedCountries.begin(), visitedCountries.end(), "Greece") == visitedCountries.end())
            hideTravelFunctionGreece = false;
        else
        {
            greece = false;
            hideTravelFunctionGreece = true;
        }
    }
    else if (!greece)
    {
        if (hideTravelFunctionGreece == false && greece == false)
            hideTravelFunctionGreece = travel();

        if(std::find(visitedCountries.begin(), visitedCountries.end(), "Greece") == visitedCountries.end())
        {
            visitedCountries.push_back("Greece");
        }

        DrawText("Greece", 1025, 941, 20, BLACK);
    }
}

void Albania()
{
    if(albania)
    {
        albania = !GuiButton((Rectangle) {960, 911, 60, 25}, "Albania"); 

        if (std::find(visitedCountries.begin(), visitedCountries.end(), "Albania") == visitedCountries.end())
            hideTravelFunctionAlbania = false;
        else
        {
            albania = false;
            hideTravelFunctionAlbania = true;
        }
    }
    else if (!albania)
    {
        if (hideTravelFunctionAlbania == false && albania == false)
            hideTravelFunctionAlbania = travel();

        if(std::find(visitedCountries.begin(), visitedCountries.end(), "Albania") == visitedCountries.end())
        {
            visitedCountries.push_back("Albania");
        }

        DrawText("Albania", 960, 911, 20, BLACK);
    }
}

void Turkey()
{
    if(turkey)
    {
        turkey = !GuiButton((Rectangle) { 1279, 916, 50, 25}, "Turkey"); 

        if (std::find(visitedCountries.begin(), visitedCountries.end(), "Turkey") == visitedCountries.end())
            hideTravelFunctionTurkey = false;
        else
        {
            turkey = false;
            hideTravelFunctionTurkey = true;
        }
    }
    else if (!turkey)
    {
        if (hideTravelFunctionTurkey == false && turkey == false)
            hideTravelFunctionTurkey = travel();

        if(std::find(visitedCountries.begin(), visitedCountries.end(), "Turkey") == visitedCountries.end())
        {
            visitedCountries.push_back("Turkey");
        }

        DrawText("Turkey", 1279, 916, 20, BLACK);
    }
}

void Montenegro()
{
    if(montenegro)
    {
        montenegro = !GuiButton((Rectangle) { 925, 873, 70, 25}, "Montenegro"); 

        if (std::find(visitedCountries.begin(), visitedCountries.end(), "Montenegro") == visitedCountries.end())
            hideTravelFunctionMontenegro = false;
        else
        {
            montenegro = false;
            hideTravelFunctionMontenegro = true;
        }
    }
    else if (!montenegro)
    {
        if (hideTravelFunctionMontenegro == false && montenegro == false)
            hideTravelFunctionMontenegro = travel();

        if(std::find(visitedCountries.begin(), visitedCountries.end(), "Montenegro") == visitedCountries.end())
        {
            visitedCountries.push_back("Montenegro");
        }

        DrawText("Montenegro", 925, 873, 20, BLACK);
    } 
}

void Kosovo()
{
    if(kosovo)
    {
        kosovo = !GuiButton((Rectangle) { 997, 875, 50, 25}, "Kosovo"); 

        if (std::find(visitedCountries.begin(), visitedCountries.end(), "Kosovo") == visitedCountries.end())
            hideTravelFunctionKosovo = false;
        else
        {
            kosovo = false;
            hideTravelFunctionKosovo = true;
        }
    }
    else if (!kosovo)
    {
        if (hideTravelFunctionKosovo == false && kosovo == false)
           hideTravelFunctionKosovo = travel();

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
        bosnia = !GuiButton((Rectangle) { 890, 830, 40, 25}, "B&H"); 

        if (std::find(visitedCountries.begin(), visitedCountries.end(), "B&H") == visitedCountries.end())
            hideTravelFunctionBosnia = false;
        else
        {
            bosnia = false;
            hideTravelFunctionBosnia = true;
        }
    }
    else if (!bosnia)
    {
        if (hideTravelFunctionBosnia == false && bosnia == false)
            hideTravelFunctionBosnia = travel();

        if(std::find(visitedCountries.begin(), visitedCountries.end(), "B&H") == visitedCountries.end())
        {
            visitedCountries.push_back("B&H");
        }

        DrawText("B&H", 890, 830, 20, BLACK);
    }    
}

void Moldova()
{
    if(moldova)
    {
        moldova = !GuiButton((Rectangle) { 1165, 730, 55, 25}, "Moldova"); 

        if (std::find(visitedCountries.begin(), visitedCountries.end(), "Moldova") == visitedCountries.end())
            hideTravelFunctionMoldova = false;
        else
        {
            moldova = false;
            hideTravelFunctionMoldova = true;
        }
    }
    else if (!moldova)
    {
        if (hideTravelFunctionMoldova == false && moldova == false)
            hideTravelFunctionMoldova = travel();

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

        if (std::find(visitedCountries.begin(), visitedCountries.end(), "Ukraine") == visitedCountries.end())
            hideTravelFunctionUkraine = false;
        else
        {
            ukraine = false;
            hideTravelFunctionUkraine = true;
        }
    }
    else if (!ukraine)
    {
        if (hideTravelFunctionUkraine == false && ukraine == false)
            hideTravelFunctionUkraine = travel();

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

        if (std::find(visitedCountries.begin(), visitedCountries.end(), "Russia") == visitedCountries.end())
            hideTravelFunctionRussia = false;
        else
        {
            russia = false;
            hideTravelFunctionRussia = true;
        }
    }
    else if (!russia)
    {
        if (hideTravelFunctionRussia == false && russia == false)
           hideTravelFunctionRussia = travel();

        if(std::find(visitedCountries.begin(), visitedCountries.end(), "Russia") == visitedCountries.end())
        {
            visitedCountries.push_back("Russia");
        }

        DrawText("Russia", 1250, 400, 20, BLACK);
    }    
}

void Belarus()
{
    if(belarus)
    {
        belarus = !GuiButton((Rectangle) { 1095, 575, 50, 25}, "Belarus");
        
        if (std::find(visitedCountries.begin(), visitedCountries.end(), "Belarus") == visitedCountries.end())
            hideTravelFunctionBelarus = false;
        else
        {
            belarus = false;
            hideTravelFunctionBelarus = true;
        }
    
    }
    else if (!belarus)
    {
        if (hideTravelFunctionBelarus == false && belarus == false)
            hideTravelFunctionBelarus = travel();

        if(std::find(visitedCountries.begin(), visitedCountries.end(), "Belarus") == visitedCountries.end())
        {
            visitedCountries.push_back("Belarus");
        }

        DrawText("Belarus", 1095, 575, 20, BLACK);
    }
}

void Finland()
{
    if(finland)
    {
        finland = !GuiButton((Rectangle) { 930, 370, 50, 25}, "Finland");
        
        if (std::find(visitedCountries.begin(), visitedCountries.end(), "Finland") == visitedCountries.end())
            hideTravelFunctionFinland = false;
        else
        {
            finland = false;
            hideTravelFunctionFinland = true;
        }
    
    }
    else if (!finland)
    {
        if (hideTravelFunctionFinland == false && finland == false)
            hideTravelFunctionFinland = travel();

        if(std::find(visitedCountries.begin(), visitedCountries.end(), "Finland") == visitedCountries.end())
        {
            visitedCountries.push_back("Finland");
        }

        DrawText("Finland", 930, 370, 20, BLACK);
    }
}

void Sweden()
{
    if(sweden)
    {
        sweden = !GuiButton((Rectangle) { 765, 380, 50, 25}, "Sweden");
        
        if (std::find(visitedCountries.begin(), visitedCountries.end(), "Sweden") == visitedCountries.end())
            hideTravelFunctionSweden = false;
        else
        {
            sweden = false;
            hideTravelFunctionSweden = true;
        }
    
    }
    else if (!sweden)
    {
        if (hideTravelFunctionSweden == false && sweden == false)
            hideTravelFunctionSweden = travel();

        if(std::find(visitedCountries.begin(), visitedCountries.end(), "Sweden") == visitedCountries.end())
        {
            visitedCountries.push_back("Sweden");
        }

        DrawText("Sweden", 765, 380, 20, BLACK);
    }
}

void Norway()
{
    if(norway)
    {
        norway = !GuiButton((Rectangle) { 660, 420, 50, 25}, "Norway");
        
        if (std::find(visitedCountries.begin(), visitedCountries.end(), "Norway") == visitedCountries.end())
            hideTravelFunctionNorway = false;
        else
        {
            norway = false;
            hideTravelFunctionNorway = true;
        }
    
    }
    else if (!norway)
    {
        if (hideTravelFunctionNorway == false && norway == false)
            hideTravelFunctionNorway = travel();

        if(std::find(visitedCountries.begin(), visitedCountries.end(), "Norway") == visitedCountries.end())
        {
            visitedCountries.push_back("Norway");
        }

        DrawText("Norway", 660, 420, 20, BLACK);
    }
}

void Estonia()
{
    if(estonia)
    {
        estonia = !GuiButton((Rectangle) { 995, 455, 55, 25}, "Estonia");
        
        if (std::find(visitedCountries.begin(), visitedCountries.end(), "Estonia") == visitedCountries.end())
            hideTravelFunctionEstonia = false;
        else
        {
            estonia = false;
            hideTravelFunctionEstonia = true;
        }
    
    }
    else if (!estonia)
    {
        if (hideTravelFunctionEstonia == false && estonia == false)
           hideTravelFunctionEstonia = travel();

        if(std::find(visitedCountries.begin(), visitedCountries.end(), "Estonia") == visitedCountries.end())
        {
            visitedCountries.push_back("Estonia");
        }

        DrawText("Estonia", 995, 455, 20, BLACK);
    }
}

void Latvia()
{
    if(latvia)
    {
        latvia = !GuiButton((Rectangle) { 1000, 490, 50, 25}, "Latvia");
        
        if (std::find(visitedCountries.begin(), visitedCountries.end(), "Latvia") == visitedCountries.end())
            hideTravelFunctionLatvia = false;
        else
        {
            latvia = false;
            hideTravelFunctionLatvia = true;
        }
    
    }
    else if (!latvia)
    {
        if (hideTravelFunctionLatvia == false && latvia == false)
           hideTravelFunctionLatvia = travel();

        if(std::find(visitedCountries.begin(), visitedCountries.end(), "Latvia") == visitedCountries.end())
        {
            visitedCountries.push_back("Latvia");
        }

        DrawText("Latvia", 1000, 490, 20, BLACK);
    }
}

void Poland()
{
    if(poland)
    {
        poland = !GuiButton((Rectangle) { 900, 640, 50, 25}, "Poland");
        
        if (std::find(visitedCountries.begin(), visitedCountries.end(), "Poland") == visitedCountries.end())
            hideTravelFunctionPoland = false;
        else
        {
            poland = false;
            hideTravelFunctionPoland = true;
        }
    
    }
    else if (!poland)
    {
        if (hideTravelFunctionPoland == false && poland == false)
            hideTravelFunctionPoland = travel();

        if(std::find(visitedCountries.begin(), visitedCountries.end(), "Poland") == visitedCountries.end())
        {
            visitedCountries.push_back("Poland");
        }

        DrawText("Poland", 900, 640, 20, BLACK);
    }
}

void Slovakia()
{
    if(slovakia)
    {
        slovakia = !GuiButton((Rectangle) { 905, 730, 60, 25}, "Slovakia");
        
        if (std::find(visitedCountries.begin(), visitedCountries.end(), "Slovakia") == visitedCountries.end())
            hideTravelFunctionSlovakia = false;
        else
        {
            slovakia = false;
            hideTravelFunctionSlovakia = true;
        }
    
    }
    else if (!slovakia)
    {
        if (hideTravelFunctionSlovakia == false && slovakia == false)
            hideTravelFunctionSlovakia = travel();

        if(std::find(visitedCountries.begin(), visitedCountries.end(), "Slovakia") == visitedCountries.end())
        {
            visitedCountries.push_back("Slovakia");
        }

        DrawText("Slovakia", 905, 730, 20, BLACK);
    }
}

void Hungary()
{
    if(hungary)
    {
        hungary = !GuiButton((Rectangle) { 915, 768, 60, 25}, "Hungary");
        
        if (std::find(visitedCountries.begin(), visitedCountries.end(), "Hungary") == visitedCountries.end())
            hideTravelFunctionHungary = false;
        else
        {
            hungary = false;
            hideTravelFunctionHungary = true;
        }
    
    }
    else if (!hungary)
    {
        if (hideTravelFunctionHungary == false && hungary == false)
            hideTravelFunctionHungary = travel();

        if(std::find(visitedCountries.begin(), visitedCountries.end(), "Hungary") == visitedCountries.end())
        {
            visitedCountries.push_back("Hungary");
        }

        DrawText("Hungary", 915, 768, 20, BLACK);
    }
}

void Croatia()
{
    if(croatia)
    {
        croatia = !GuiButton((Rectangle) { 855, 805, 55, 25}, "Croatia");
        
        if (std::find(visitedCountries.begin(), visitedCountries.end(), "Croatia") == visitedCountries.end())
            hideTravelFunctionCroatia = false;
        else
        {
            croatia = false;
            hideTravelFunctionCroatia = true;
        }
    
    }
    else if (!croatia)
    {
        if (hideTravelFunctionCroatia == false && croatia == false)
           hideTravelFunctionCroatia = travel();

        if(std::find(visitedCountries.begin(), visitedCountries.end(), "Croatia") == visitedCountries.end())
        {
            visitedCountries.push_back("Croatia");
        }

        DrawText("Croatia", 855, 805, 20, BLACK);
    }  
}

void Slovenia()
{
    if(slovenia)
    {
        slovenia = !GuiButton((Rectangle) { 790, 805, 60, 25}, "Slovenia");
        
        if (std::find(visitedCountries.begin(), visitedCountries.end(), "Slovenia") == visitedCountries.end())
            hideTravelFunctionSlovenia = false;
        else
        {
            slovenia = false;
            hideTravelFunctionSlovenia = true;
        }
    
    }
    else if (!slovenia)
    {
        if (hideTravelFunctionSlovenia == false && slovenia == false)
            hideTravelFunctionSlovenia = travel();

        if(std::find(visitedCountries.begin(), visitedCountries.end(), "Slovenia") == visitedCountries.end())
        {
            visitedCountries.push_back("Slovenia");
        }

        DrawText("Slovenia", 790, 805, 20, BLACK);
    }
}

void Austria()
{
    if(austria)
    {
        austria = !GuiButton((Rectangle) { 800, 760, 55, 25}, "Austria");
        
        if (std::find(visitedCountries.begin(), visitedCountries.end(), "Austria") == visitedCountries.end())
            hideTravelFunctionAustria = false;
        else
        {
            austria = false;
            hideTravelFunctionAustria = true;
        }
    
    }
    else if (!austria)
    {
        if (hideTravelFunctionAustria == false && austria == false)
            hideTravelFunctionAustria = travel();

        if(std::find(visitedCountries.begin(), visitedCountries.end(), "Austria") == visitedCountries.end())
        {
            visitedCountries.push_back("Austria");
        }

        DrawText("Austria", 800, 760, 20, BLACK);
    }
}

void Czech()
{
    if(czech)
    {
        czech = !GuiButton((Rectangle) { 790, 700, 80, 25}, "Czech Republic");
        
        if (std::find(visitedCountries.begin(), visitedCountries.end(), "Czech Republic") == visitedCountries.end())
            hideTravelFunctionCzech = false;
        else
        {
            czech = false;
            hideTravelFunctionCzech = true;
        }
    
    }
    else if (!czech)
    {
        if (hideTravelFunctionCzech == false && czech == false)
           hideTravelFunctionCzech = travel();

        if(std::find(visitedCountries.begin(), visitedCountries.end(), "Czech Republic") == visitedCountries.end())
        {
            visitedCountries.push_back("Czech Republic");
        }

        DrawText("Czech Republic", 790, 700, 20, BLACK);
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