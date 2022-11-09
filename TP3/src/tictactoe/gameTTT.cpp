#include "gameTTT.hpp"

#include "../generic/token.hpp"

GameTTT::GameTTT() :
    p1("Joueur 1", Token::cross), p2("Joueur 2", Token::circle)
{}

GameTTT::~GameTTT()
{}

void GameTTT::play()
{
    bool win = false;
    int nbRound = 1;
    PlayerTTT players[] = { this->p1, this->p2 };

    do {
        win = players[ nbRound % 2 ].play(this->grid);  
        nbRound++;      
        this->grid.display();
    }
    while (!win);

    std::cout << players[ nbRound % 2 ].getName() << " gagne en " << nbRound << " rounds !" << std::endl; 
}