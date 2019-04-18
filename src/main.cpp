/*
 * main.cpp
 *
 *  Created on: Apr 13, 2019
 *      Author: d-w-h
 *
 *      Implementation of merge_sort algorithm
 */

#include <iostream>
#include <cstdlib>
#include "../inc/merge_sort.hpp"

int main(int argc, char* argv[]) {

	int A[] = {0, 0, 0, 1, 2, 3, 4, 5, 6,
	           0, 2, 2, 2, 3, 5, 8, 9, 0,
	           0, 0, 0, 14, 11};

	int size_a = sizeof(A)/sizeof(int) - 1;

	merge_sort_wrapper(A, size_a);

	for(int n = 0; n < size_a + 1; ++n) {
		std::cout << A[n] << std::endl;
	}

	return 0;
}
