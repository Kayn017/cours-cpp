#include "playerTTT.hpp"

PlayerTTT::PlayerTTT(const std::string name, const Token& token):
    Player(name, token)
{}

bool PlayerTTT::play(GridTTT& grid)
{
    bool res = false;
    int column = -1, line = -1;

    do {
        std::cout << "Choisissez une case dans laquelle jouer. ( x y )." << std::endl;

        std::cin >> line;
        std::cin >> column;

        if( column <= 0 || column > grid.getNbColumns())
        {
            std::cout << "Veuillez rentrer un numéro de colonne valide." << std::endl;
            continue;
        }

        if( line <= 0 || line > grid.getNbLines())
        {
            std::cout << "Veuillez rentrer un numéro de ligne valide." << std::endl;
            continue;
        } 

        if(grid.canPlace(line - 1, column - 1)) 
        {
            std::cout << "Veuillez rentrer un numéro de colonne valide." << std::endl;
            continue;
        }
    
        grid.place(line - 1, column - 1, this->getToken());
        res = true;
    } 
    while(
        !res
    );

    return grid.checkAlignment(line - 1, column - 1, this->getToken()); 
}