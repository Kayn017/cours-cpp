#ifndef _GAME_C4_H
#define _GAME_C4_H

#include "playerC4.hpp"
#include "gameC4.hpp"

class GameC4 
{
    public:
        // constructors
        GameC4();
        // destructors
        ~GameC4();
        // methods
        void play();
    private:
        PlayerC4 p1;
        PlayerC4 p2;
        GridC4 grid;
};

#endif // _GAME_C4_H