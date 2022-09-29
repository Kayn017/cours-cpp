#include <iostream>

#include "console_saisies.hpp"

// III.1.1
void hello_name()
{
	std::cout << "Quoi être prénom ?" << std::endl;

	std::string firstname;

	std::cin >> firstname;

	std::cout << "Bonjour " << firstname << " !" << std::endl;
}

// III.1.2
void hello_names() 
{
	std::cout << "Quoi être prénom et nom ?" << std::endl;

	std::string firstname;
	std::string lastname;

	std::cin >> firstname;
	std::cin >> lastname;

	std::cout << "Bonjour " << firstname << " " << lastname <<" !" << std::endl;
}

// III.2.1
void more_or_less() 
{
	srand(time(NULL));

	int secret_number = rand() % 1001; 

	int nb_tries = 0, last_try_number;
	std::string message;

	do 
	{
		std::cout << "Quoi être numéro ?" << std::endl;
		std::cin >> last_try_number;

		if(secret_number == last_try_number)
			message = "Bravo ! Toi avoir trouvé bon numéro !";
		else if (secret_number > last_try_number)
			message = "C'est plus que ça";
		else
			message = "C'est moins que ça";

		std::cout << message << std::endl;

		nb_tries++;

	} while(secret_number != last_try_number);

	std::cout << "Tu l'as réussi en " << nb_tries << " essais ! Bravo !" << std::endl;

}