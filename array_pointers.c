#include <stdio.h>
/* This program should show you that arrays are treated as pointers in C and you can access all the elements using pointers as opposed to array[index] */

int main() {

	/* an array with 5 elements */
	double balance[5] = { 1000.0, 2.0, 3.4, 17.0, 50.0 };

	/* pointer declaration*/
	double* p;
	int i;

	/* assign the pointer the address of the first element in the balance array */
	p = balance;

	/* output each array element's value */
	printf("Array values using pointer\n");

	for (i = 0; i < 5; i++) {
		printf("*(p + %d) : %f\n", i, *(p + i));
	}

	printf("Array values using balance as address\n");

	for (i = 0; i < 5; i++) {
		printf("*(balance + %d) : %f\n", i, *(balance + i));
	}

	return 0;
}



































































































































































