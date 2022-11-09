#ifndef _PLAYER_H
#define _PLAYER_H

#include <string>

#include "token.hpp"
#include "grid.hpp"

class Player
{
    public:
        // constructors
        Player(const std::string name, const Token& token);
        // destructors
        ~Player();
        // getters
        inline std::string getName() { return this->name; };
        inline Token getToken() { return this->token; };
        // setters
        inline void setName(std::string name) { this->name = name; };
        inline void setToken(Token token) { this->token = token; };
        // methods
        virtual bool play(Grid& grid);
    private:
        std::string name;
        Token token;
};

#endif // _PLAYER_H