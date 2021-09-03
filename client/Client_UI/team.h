#pragma once
#include "player.h"
#include "constant.h"
#include "castle.h"
#include "weapon.h"


/* Store team data
    * @param	id              id of the team
    * @param	player_number	number of the player in team   
    * @param	players         list player
    * @param	castle_number   number of castle team has
    * @param	castles         list castles team has
    * @param	weapon          weapon of the team
    * @param	wall            wall of the team
    * @param	gold            amount of gold
    * @param	wood            amount of wood
    * @param	stone           amount of stone
    * @param	iron            amount of iron
    
*/
class Team {
public:
    int id;
    int player_number;
    Player players[MAX_PLAYER_OF_TEAM];

    int castle_number;
    Castle castles[MAX_CASTLE_OF_GAME];
    Weapon	weapon;
    Wall wall;
    int	gold;
    int	wood;
    int	stone;
    int	iron;

    Team();
    Team(int id);
    Team(int id, Player* players, int player_number);
    void add_player(Player player);
    void add_castle(Castle castle);
};
