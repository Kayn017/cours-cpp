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

	// III.1.2 bonus
	firstname[0] = toupper(firstname[0]);

	for(std::size_t i = 1; i < firstname.size(); i++)
		firstname[i] = tolower(firstname[i]);


	for(std::size_t i = 0; i < lastname.size(); i++)
		lastname[i] = toupper(lastname[i]);

	std::cout << "Bonjour " << firstname << " " << lastname <<" !" << std::endl;
}

// III.2.2
void more_or_less() 
{
	srand(time(NULL));

	int secret_number = rand() % 1001; 

	std::cout << "Devine le nombre auquel je pense...." << std::endl;

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

// III.2.3 bonus
void more_or_less_computer() 
{
	std::cout << "Choisissez (sans me dire) un nombre entre 0 et 1000......" << std::endl;
	std::cout << "Je vais vous dire à quel nombre je pense" << std::endl;
	std::cout << "et dites moi si le nombre est celui auquel vous pensez, si c'est + ou -." << std::endl;
	
	int nb_tries = 0, guess = 500, offset = guess / 2;
	std::string response;

	do
	{
		std::cout << "Je pense au nombre " << guess << "." << std::endl;
		std::cout << "Est ce que ce nombre est le bon ?" << std::endl;
		std::cout << "+ : je pense a un nombre supérieur" << std::endl;
		std::cout << "= : c'est le nombre auquel je pensais" << std::endl;
		std::cout << "- : je pense a un nombre inférieur" << std::endl;

		std::cin >> response;

		if(response == "+")
			guess += offset;
		
		else if(response == "-")
			guess -= offset;
		
		
		if(offset > 1)
			offset /= 2;

		nb_tries++;

	} while (response != "=");

	std::cout << "Haha ! Je le savais ! Je l'ai fait en " << nb_tries << " coups !" << std::endl;
	
}