#include "gameC4.hpp"

GameC4::GameC4():
    grid(GridC4(4, 7)), p1("Joueur 1", Token::circle), p2("Joueur 2", Token::cross)
{}

GameC4::~GameC4()
{}

void GameC4::play()
{
    bool win = false;
    int nbRound = 1;
    PlayerC4 players[] = { this->p1, this->p2 };

    do {
        win = players[ nbRound % 2 ].play(this->grid);  
        nbRound++;      
        this->grid.display();
    }
    while (!win);

    std::cout << players[ nbRound % 2 ].getName() << " gagne en " << nbRound << " rounds !" << std::endl; 
}