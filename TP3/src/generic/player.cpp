#include "player.hpp"

#include <iostream>

Player::Player(const std::string name, const Token& token) :
    name(name), token(token)
{}

bool Player::play(Grid& grid)
{
    int line, column;
 
    do {
        std::cout << "Entrez les coordonnées de la case ou vous voulez jouer. ( ligne colonne )" << std::endl;

        std::cin >> line >> column;
    }
    while(
        !grid.canPlace(line, column)
    );

    grid.place(line, column, this->token);

    return grid.checkAlignment(line, column, token);
}