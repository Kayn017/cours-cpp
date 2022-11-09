#ifndef _GAME_TTT_H
#define _GAME_TTT_H

#include "playerTTT.hpp"
#include "gridTTT.hpp"

class GameTTT
{
    public:
        // constructors
        GameTTT();
        // destructors
        ~GameTTT();
        // methods
        void play();
    private:
        PlayerTTT p1;
        PlayerTTT p2;
        GridTTT grid;
};

#endif // _GAME_TTT_h