#include "grid.hpp"

// constructors
Grid::Grid(const std::size_t nb_lines, const std::size_t nb_columns, const int nb_cases_to_align) :
    nb_lines(nb_lines), nb_columns(nb_columns), nb_cases_to_align(nb_cases_to_align)
{
    this->grid.resize(nb_lines, std::vector<Token>(nb_columns));
}

// destructors
Grid::~Grid()
{}

// methods
bool Grid::canPlace(const int line, const int column)
{
    return this->getValue(line, column) == Token::none;
}

bool Grid::place(const int line, const int column, const Token& token)
{
    if(!this->canPlace(line, column))
        return false;

    this->grid[line][column] = token;

    return true;
}

bool Grid::checkLineAlignment(const int line, const Token& token)
{
    for(int i = 0; i < this->nb_columns; i++)
    { 
        for(int j = 0; j <= this->nb_cases_to_align && i + j < this->nb_columns; j++)
        {
            if(this->getValue(line, i + j) != token) 
                break;

            if(j == this->nb_cases_to_align)
                return true;
        }
    }

    return false;
}

bool Grid::checkColumnAlignment(const int column, const Token& token)
{
    for(int i = 0; i < this->nb_lines; i++)
    {
        for(int j = 0; j <= this->nb_cases_to_align && i + j < this->nb_lines; j++ )
        {
            if(this->getValue(i + j, column) != token)
                break;
            
            if(j == this->nb_cases_to_align)
                return true;
        }
    }

    return false;
}

bool Grid::checkTopLeftToBottomRightAlignment(const int line, const int column, const Token& token) 
{
    int nb_token = 0;

    for(int i = -(this->nb_cases_to_align - 1); i < this->nb_cases_to_align; i++)
    {
        if(line + i < 0) 
            continue;

        if(this->grid[line + i][column + i] != token)
        {
            nb_token = 0; 
            continue;
        }

        nb_token++;

        if(nb_token >= this->nb_cases_to_align)
            return true;
    }

    return false;
}

bool Grid::checkTopRightToBottomLeftAlignment(const int line, const int column, const Token& token)
{
    int nb_token = 0;

    for(int i = -(this->nb_cases_to_align - 1); i < this->nb_cases_to_align; i++)
    {
        if(line + i < 0) 
            continue;

        if(column - i < 0)
            continue;

        if(this->grid[line + i][column - i] != token)
        {
            nb_token = 0; 
            continue;
        }

        nb_token++;

        if(nb_token >= this->nb_cases_to_align)
            return true;
    }

    return false;
}

bool Grid::checkDiagonalAlignment(const int line, const int column, const Token& token)
{
    return this->checkTopLeftToBottomRightAlignment(line, column, token) || 
        this->checkTopRightToBottomLeftAlignment(line, column, token); 
}

bool Grid::checkAlignment(const int line, const int column, const Token& token)
{
    return this->checkColumnAlignment(column, token) ||
        this->checkLineAlignment(line, token) ||
        this->checkDiagonalAlignment(line, column, token); 
}

void Grid::display()
{
    for(std::vector<Token> line : this->grid)
    {
        // static cast for print enum value 
        for(Token token : line)
            printf(" %c", token);

        std::cout << std::endl;
    }
}