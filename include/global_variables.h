#ifndef GLOBAL_VARIABLES
#define GLOBAL_VARIABLES

#include <vector>
#include <string>
#include <algorithm>
#include "raylib.h"
#include "rlgl.h"
#include "raymath.h"
#include "raylib.h"
#define RAYGUI_IMPLEMENTATION
#include "raygui.h"

#define SCREEN_WIDTH 1920
#define SCREEN_HEIGHT 1080

//menu variables
extern bool play = true;
extern bool fullscreen = true;
extern bool exitB = true;
extern bool showList = true;
extern bool pause = false;
extern bool quiz = true;
extern bool answered = true;
extern int questionNum = 0;
extern int readMess = 1;

extern std::vector<std::string> visitedCountries{"Bulgaria"};

extern int money = 300; // 300 is the start amount of the journey 

extern bool romania = true;
extern bool serbia = true;
extern bool macedonia = true;
extern bool greece = true;
extern bool albania = true;
extern bool turkey = true;
extern bool montenegro = true;
extern bool kosovo = true;
extern bool bosnia = true;
extern bool moldova = true;
extern bool ukraine = true;
extern bool russia = true;
extern bool belarus = true;
extern bool finland = true;
extern bool sweden = true;
extern bool norway = true;
extern bool estonia = true;
extern bool latvia = true;
extern bool poland = true;
extern bool slovakia = true;
extern bool hungary = true;
extern bool croatia = true;
extern bool slovenia = true;
extern bool austria = true;
extern bool czech = true;
extern bool germany = true;
extern bool netherlands = true;
extern bool denmark = true;
extern bool belgium = true;
extern bool switz = true;
extern bool france = true;
extern bool italy = true;
extern bool spain = true;
extern bool portugal = true;
extern bool uk = true;
extern bool ireland = true;
extern bool iceland = true;
extern bool lithuania = true;


#endif