#include <iostream>
#include <string>

#include "tennis.hpp"


void calc_score(int winner, int score[]) 
{
	int loser = !winner;

	switch (score[winner])
	{
		case 0:
		case 15:
			score[winner] += 15;
			break;
		case 30:
			score[winner] += 10;
			break;
		case ADVANTAGE:
			score[winner] = VICTORY;
			break;
		case 40:
			if(score[loser] == ADVANTAGE)
				score[loser] = 40;

			else if(score[loser] == 40)
				score[winner] = ADVANTAGE;
			
			else 
				score[winner] = VICTORY;
			break;
	}
}

void display_player_score(int player, int score) 
{
	std::string message = "";

	switch (score)
	{
		case ADVANTAGE:
			message = "ADVANTAGE";
			break;
		case VICTORY:
			message = "WIN";
			break;
		default:
			message = std::to_string(score);
			break;
	}

	std::cout << "J" << player << " : " << message << std::endl;
}