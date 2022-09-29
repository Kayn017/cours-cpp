#include <iostream>
#include <cstdlib>

#include "manip_nombre.hpp"
#include "tennis.hpp"
#include "console_saisies.hpp"

int main(int argc, char *argv[])
{
	std::cout << " ****** Random array ******" << std::endl;

	std::size_t size = 10;
	int array[size];

	generate_int_random(size, array);

	std::cout << " *** Random array ***" << std::endl;
	print_array(array, size);

	bubble_sort(array, size);

	std::cout << " *** Sorted array ***" << std::endl;
	print_array(array, size);



	std::cout << " ****** Tennis ******" << std::endl;
    
	int scores[] = { 0, 0 };

	do {
		std::cout << "Qui a gagné cet échange ? \nEntrez : \n 1 pour le joueur 1,\n 2 pour le joueur 2" << std::endl;

		int response;

		std::cin >> response;

		if(response < 1 || response > 2) 
		{
			std::cerr << "Réponse invalide" << std::endl;
			continue;
		}

		calc_score(response - 1, scores);

		display_player_score(1, scores[0]);
		display_player_score(2, scores[1]);		
		
	} while(scores[0] != VICTORY && scores[1] != VICTORY);



	return EXIT_SUCCESS;
}