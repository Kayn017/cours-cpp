#include <iostream>
#include <cstdlib>


#include "manip_nombre.hpp"

int main(int argc, char *argv[])
{
	std::size_t size = 10;
	int array[size];

	generate_int_random(size, array);

	std::cout << " *** Random array ***" << std::endl;
	print_array(array, size);

	bubble_sort(array, size);

	std::cout << " *** Sorted array ***" << std::endl;
	print_array(array, size);


	return EXIT_SUCCESS;
}