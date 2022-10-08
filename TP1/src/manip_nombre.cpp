#include <cstdlib>
#include <ctime>
#include <iostream>

#include "manip_nombre.hpp"

// I.1.1
int sum(int a, int b)
{
	return a + b;
}

// I.1.2
void swap(int &a, int &b)
{
	int tmp = b;
	b = a;
	a = tmp;
}

// I.1.3
void sum_three_parameters_pointers(int a, int b, int* sum)
{
	*sum = a + b; 
}

void sum_three_parameters_reference(int a, int b, int &sum)
{
	sum = a + b;
}

// I.1.4
void generate_int_random(std::size_t size, int array[]) 
{
	srand(time(NULL));

	for(std::size_t i = 0; i < size; i++)
	{
		array[i] = rand();
	}
}

void print_array(const int array[], std::size_t size) 
{
    for(std::size_t i = 0; i < size; i++) 
    {
        std::cout << array[i] << std::endl;
    }
}

void bubble_sort(int array[], std::size_t size, int order = ASCENDING)
{
	for(std::size_t i = size; i > 0; i--)
	{
		bool sorted = true;

		for(std::size_t j = 0; j < i - 1; j++)
		{
			if(order == ASCENDING && array[j] > array[j + 1]) 
			{
				swap(array[j], array[j + 1]);
				sorted = false;
			}
			else if(order == DESCENDING && array[j] < array[j + 1]) 
			{
				swap(array[j], array[j + 1]);
				sorted = false;
			}
		}

		if(sorted)
			break;
	}
}