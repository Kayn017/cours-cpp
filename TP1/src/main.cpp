#include <iostream>
#include <cstdlib>

#include "manip_nombre.hpp"
#include "tennis.hpp"
#include "console_saisies.hpp"

void main_part_one()
{
	std::cout << "Renseignez la taille du tableau : " << std::endl;

	std::size_t size;

	std::cin >> size;

	if(size < 0)
	{
		std::cerr << "Merci de rentrer une taille valide." << std::endl;
		return;
	}
	
	int array[size];

	generate_int_random(size, array);

	std::cout << " *** Tableau aléatoire ***" << std::endl;
	print_array(array, size);

	int order = ASCENDING;

	std::cout << "Dans quel ordre voulez vous trier ce tableau ? " << std::endl;
	std::cout << "0 - Croissant (par défaut) " << std::endl;
	std::cout << "1 - Décroissant " << std::endl;

	std::cin >> order;

	if(order < 0 || order > 1)
	{
		std::cerr << "Merci de rentrer un ordre valide." << std::endl;
		return;
	}

	bubble_sort(array, size, order);

	std::cout << " *** Tableau trié ***" << std::endl;
	print_array(array, size);

	// I.1.4 bonus 2
	bubble_sort(array, size, !order);

	std::cout << " *** Tableau trié inverse ***" << std::endl;
	print_array(array, size);
}

void main_part_two()
{
	std::cout << " ****** Tennis ******" << std::endl;
    
	int scores[] = { 0, 0 };

	display_player_score(1, scores[0]);
	display_player_score(2, scores[1]);		

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
}

void main_part_three()
{
	hello_names();
	more_or_less();
	more_or_less_computer();
}

int main(int argc, char *argv[])
{
	std::cout << " *** Quelle partie voulez-vous executer ? ***" << std::endl;
	std::cout << " - 1 : partie 1 : Manipulation de nombres" << std::endl;
	std::cout << " - 2 : partie 2 : Jeu de Tennis" << std::endl;
	std::cout << " - 3 : partie 3 : Inscription dans la console et récupération des saisies" << std::endl;
	std::cout << " Entrez la partie que vous souhaitez tester : " << std::endl;

	int choice = 0;

	std::cin >> choice;

	switch(choice) 
	{
		case 1:
			main_part_one();
			break;
		case 2: 
			main_part_two();
			break;
		case 3:
			main_part_three();
			break;
		default:
			std::cerr << "Entrée invalide." << std::endl;
			return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}