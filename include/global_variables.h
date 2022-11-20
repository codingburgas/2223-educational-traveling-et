#ifndef GLOBAL_VARIABLES
#define GLOBAL_VARIABLES

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream> 
#include <sstream>
#include <cassert>
#include <iterator>
#include "raylib.h"
#include "rlgl.h"
#include "raymath.h"
#include "raylib.h"
#define RAYGUI_IMPLEMENTATION
#include "raygui.h"

#define SCREEN_WIDTH 1920
#define SCREEN_HEIGHT 1080

//menu variables
bool play = true;
bool fullscreen = true;
bool exitB = true;
bool showList = true;
bool pause = false;
bool quiz = true;
bool answered = true;
bool addContentToFile = true;
bool haveTravel = true;

int score = 0;
int questionNum = 0;
int questionAnsweredNum = 1;
int readMess = 1;
int runOnlyOneTime = 0;
bool finishGame = 0;

int plane = 0;
int car = 0;
int train = 0;

// variables used in finish()
int framesCounter = 0;
int letters = 0;
// save inputed text
char name[11] = "\0";


std::vector<std::string> visitedCountries;

int money = 300; // 300 is the start amount of the journey 

// number corresponding to country

// romania      0
// serbia       1
// macedonia    2
// greece       3
// albania      4
// turkey       5
// montenegro   6
// kosovo       7
// bosnia       8
// moldova      9
// ukraine      10
// russia       11
// belarus      12
// finland      13
// sweden       14
// norway       15
// estonia      16
// latvia       17
// poland       18
// slovakia     19
// hungary      20
// croatia      21
// slovenia     22
// austria      23
// czech        24
// germany      25
// netherlands  26
// denmark      27
// belgium      28
// switz        29
// france       30
// italy        31
// spain        32
// portugal     33
// uk           34
// ireland      35
// iceland      36
// lithuania    37

float countryCoords[2][39] = { // coordinates of every country
/* x */  { 1071 , 973 , 1020 , 1025 , 960 , 1279 , 925 , 997 , 870 , 1165 , 1200 , 1250 , 1095 , 930 , 765 , 660 , 995 , 1000 , 900 , 905 , 915 , 855 , 790 , 800 , 790 , 660 , 560 , 660 , 550 , 630 , 480 , 710 , 260 , 105 , 390 , 235 , 200 , 965 , 1050},
/* y */  { 769  , 825 , 897  , 941  , 911 , 916  , 873 , 875 , 845 , 730  , 670  , 400  , 575  , 370 , 380 , 420 , 455 , 490  , 640 , 730 , 768 , 805 , 805 , 760 , 700 , 690 , 640 , 550 , 690 , 790 , 777 , 860 , 930 , 920 , 620 , 585 , 250 , 545 , 860 }
};

bool countriesBool[38] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };

bool countriesTravelFunction[38] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };

bool drawCountry[38] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };

const char* countriesNames[38] = { "Romania", "Serbia", "Macedonia", "Greece", "Albania", "Turkey", "Montenegro", "Kosovo", "Bosnia", "Moldova", "Ukraine", "Russia", "Belarus", "Finland", "Sweden", "Norway", "Estonia", "Latvia", "Poland", "Slovakia", "Hungary", "Croatia", "Slovenia", "Austria", "Czech_Republic", "Germany", "Netherlands", "Denmark", "Belgium", "Switzerland", "France", "Italy", "Spain", "Portugal", "United_Kingdom", "Ireland", "Iceland", "Lithuania" };

unsigned int lastVisited = 38; // default - Bulgaria
int currentCountry = 38; // default - Bulgaria

// amount of frames that have passed
int travelPos = 0; 

// save which button has been pressed so that transport animation can be fully finished
int travelType = 0;

#endif