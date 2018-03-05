#include <iostream>
#include <string>
#include <time.h>

#include "Character.h"

using namespace std;

int main() {

    srand(time(NULL));
    Character LordVau(true);
    Character ScarryVacuumCleaner(false);
    cout << "LordVau's heals: "<< LordVau.getter_health() << endl;
    cout << "ScarryVacuumCleaner's heals: " << ScarryVacuumCleaner.getter_health() << endl;

    ///*
    cout << "LordVau's abilities" << endl;
    LordVau.getter_other();
    cout << endl;

    cout << "ScarryVacuumCleaner's abilities" << endl;
    ScarryVacuumCleaner.getter_other();
    cout << endl;

    while (LordVau.getter_health() >= 0 && ScarryVacuumCleaner.getter_health() >= 0) {
    LordVau.attacking(ScarryVacuumCleaner);
    cout << "ScarryVacuumCleaner's heals: " << ScarryVacuumCleaner.getter_health() << endl;
    ScarryVacuumCleaner.attacking(LordVau);
    cout << "LordVau's heals: " << LordVau.getter_health() << endl;

    }


   // */


    //RPG Game lite
    //Create a Character class with the following preferences:
    //name
    //character type (player/monster)
    //health point value
    //attack value
    //defense value
    //attacking method which takes a character class and decreases its health
    //value with (current character class attack - input character class defense),
    //if the output is minus, then our health is decreased
    //set the attacking method to have 50% chanse to count our attack value twice,
    //(2xcurrent attack - input defense) before calculating the final health points.

    //create 2 instances of the character class and fill their base stats from their constructor
    //make them attack each other with the attack method from the character class
    //after each round print both the attacker, and the attacked character health
    //make them fight each other until one of them has a health point lower or equal 0
    //print the winner and offer a new game

    //dont forget to use private variables, and get/set methods, and also place out_of_range
    //character class into a seperate file

  return 0;
}
