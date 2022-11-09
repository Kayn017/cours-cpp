#ifndef _PLAYER_TTT_H
#define _PLAYER_TTT_H

#include "../generic/player.hpp"
#include "gridTTT.hpp"

class PlayerTTT : public Player
{
    public:
        // constructors
        PlayerTTT(const std::string name, const Token& token);
        // methods
        bool play(GridTTT& grid);
};

#endif // _PLAYER_TTT_H