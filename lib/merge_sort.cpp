/*
 * merge_sort.cpp
 *
 *  Created on: Apr 13, 2019
 *      Author: d-w-h
 */

#include "../inc/merge_sort.hpp"

void merge_sort_wrapper(int A[], int size) {
	merge_sort(A, 0, size-1);
}

void merge_sort(int A[], int p, int r) {
	int q;
	if(p < r) {
		q = (p + r)/2;
		merge_sort(A, p, q);
		merge_sort(A, q + 1, r);
		merge(A, p, q, r);
	}
}
