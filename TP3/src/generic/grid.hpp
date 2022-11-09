#ifndef _GRID_H
#define _GRID_H

#include <iostream>
#include <vector>

#include "token.hpp"

class Grid
{
    public:
        // constructor
        Grid(const std::size_t nb_lines, const std::size_t nb_columns, const int nb_cases_to_align);
        // destructor
        ~Grid();
        // methods
        inline Token getValue(const int line, const int column) { return this->grid[line][column]; }
        virtual bool canPlace(const int line, const int column);
        virtual bool place(const int line, const int column, const Token& token);
        bool checkLineAlignment(const int line, const Token& token);
        bool checkColumnAlignment(const int column, const Token& token);
        bool checkTopLeftToBottomRightAlignment(const int line, const int column, const Token& token);
        bool checkTopRightToBottomLeftAlignment(const int line, const int column, const Token& token);
        bool checkDiagonalAlignment(const int line, const int column, const Token& token);
        bool checkAlignment(const int line, const int column, const Token& token);
        void display();
    private:
        std::vector<std::vector<Token>> grid;

        int nb_lines;
        int nb_columns;
        int nb_cases_to_align;
};

#endif // _GRID_H