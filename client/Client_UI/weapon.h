#pragma once
#include "constant.h"

#define NO_WEAPON_NAME "Egg fights rock"
#define BALISTA_NAME "Balista Sword"
#define CATAPULT_NAME "Big Catapult"
#define CANNON_NAME "Super Dupper Gaint Cannon"


/* Store waepon infomation
    * @param	type            type of weapon
    * @param	attack	        attack stat of the weapon
    * @param	name            name of the weapon
    * @param	wood            number of wood cost
    * @param	stone           number of stont cost
    * @param	iron            number of iron cost
    
*/
class Weapon {
public:
    int type;
    char name[NAME_LENGTH + 1];
    int	attack;
    int	wood;
    int	stone;
    int	iron;

    Weapon();
    Weapon(int type, int attack, char* name, int wood, int stone, int iron);

};

Weapon get_weapon(int type);
