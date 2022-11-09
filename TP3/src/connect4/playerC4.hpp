#ifndef _PLAYER_C_H
#define _PLAYER_C_H

#include "../generic/player.hpp"
#include "gridC4.hpp"

class PlayerC4 : public Player
{
    public:
        // constructors
        PlayerC4(const std::string name, const Token& token);
        // methods
        bool play(GridC4& grid);
};

#endif // _PLAYER_C_H