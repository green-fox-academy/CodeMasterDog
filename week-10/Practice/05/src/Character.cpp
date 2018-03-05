#include "Character.h"

Character::Character(bool character_type)
{   //player
    if (character_type) {   //player
        health = 130;
        attack = 15;
        defense = 30;
    }
    else {                  //monster
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
    cout << "character type: " << std::boolalpha << character_type << endl;
}

void Character::attacking(Character& enemy)
{
    int diff;

    if (rand() % 2)
       diff = 2 * attack - enemy.defense;
    else
       diff = attack - enemy.defense;

    if (diff > 0)
        enemy.health -= diff;
}

Character::~Character()
{
    //dtor
}
