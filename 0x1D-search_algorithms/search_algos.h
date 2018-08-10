#ifndef __SEARCH_ALGOS__
#define __SEARCH_ALGOS__
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binary_search_(int *array, size_t l, size_t r, int value);
int print_array(int *array, size_t l, size_t r);

#endif
