#include "Character.h"

Character::Character(bool character_type)
{   //player
    if (character_type) {
        health = 100;
        attack = 15;
        defense = 30;
    }
    else {
        health = 150;
        attack = 26;
        defense = 9;
    }
}

int Character::getter_health()
{
    return health;
}

void Character::getter_other()
{
    cout << "attack value: " << attack << endl;
    cout << "defense value: " << defense << endl;
    cout << "character type: " << character_type << endl;
}
//attacking method which takes a character class and decreases its health
//value with (current character class attack - input character class defense),
//if the output is minus, then our health is decreased
//set the attacking method to have 50% chanse to count our attack value twice,
//(2xcurrent attack - input defense) before calculating the final health points.

void Character::attacking(Character& enemy)
{
    int diff = attack - enemy.defense;

    if (diff > 0)
        enemy.health -= diff;
}

Character::~Character()
{
    //dtor
}
