#include "playerC4.hpp"

#include <iostream>

PlayerC4::PlayerC4(const std::string name, const Token& token):
    Player(name, token)
{}

bool PlayerC4::play(GridC4& grid)
{
    bool res = false;
    do {
        std::cout << "Choisissez une colonne dans laquelle jouer. (entre 1 et " << grid.getNbColumns() << ")." << std::endl;

        int column = -1;

        std::cin >> column;

        if( column <= 0 || column > grid.getNbColumns())
        {
            std::cout << "Veuillez rentrer un numéro de colonne valide." << std::endl;
            continue;
        }

        for(int i = 0; i < grid.getNbLines(); i++)
        {
            if(grid.canPlace(i, column - 1))
            {
                grid.place(i, column - 1, this->getToken());
                res = true;
                break;
            }
        }

        std::cout << "Veuillez rentrer un numéro de colonne valide." << std::endl;
    } 
    while(
        !res
    );

    return true; 
}
