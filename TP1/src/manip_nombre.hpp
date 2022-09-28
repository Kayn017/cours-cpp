#ifndef _manip_nombre_h
#define _manip_nombre_h

#include <cstddef>

// I.1.1
int sum(int a, int b);
// I.1.2
void swap(int &a, int &b);
//I.1.3
void sum_three_parameters_pointers(int a, int b, int* sum);
void sum_three_parameters_reference(int a, int b, int &sum);
// I.1.4
void generate_int_random(std::size_t size, int array[]);
void print_array(const int array[], std::size_t size);
void bubble_sort(int array[], std::size_t size);

#endif