/*
 * merge.cpp
 *
 *  Created on: Apr 13, 2019
 *      Author: d-w-h
 */

#define MAX_INT 1215752192

void merge(int A[], int p, int q, int r) {
    int size_r, size_l;
    int i, j;
    size_l = q - p + 2;
    size_r = r - q + 2;
    int L[size_l];
    int R[size_r];
    i = 0;
    j = 0;
    for(int n = p; n < q + 1; ++n) {
    	L[i] = A[n];
    	++i;
    }
    L[size_l-1] = MAX_INT;
    for(int n = q + 1; n < r + 1; ++n) {
    	R[j] = A[n];
    	++j;
    }
    R[size_r-1] = MAX_INT;
    i = 0;
    j = 0;
    for(int n = p; n < r + 1; ++n) {
    	if(L[i] < R[j]) {
    		A[n] = L[i];
    		++i;
    	}
    	else {
    		A[n] = R[j];
    		++j;
    	}
    }
}
