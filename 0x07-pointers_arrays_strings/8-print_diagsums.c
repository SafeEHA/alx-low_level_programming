#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints the sum of the two diagonals of a square
 * matrix of integers.
 * @a: pointer that contains the address of the beginning of the matrix
 * @n: size of the square matrix
 */

void print_diagsums(int *a, int n)
{
	int i;

	unsigned int sum, sum1;

	sum = 0;
	sum1 = 0;

	for (i = 0; i < n; i++)
	{
		sum += a[(n + 1) * i];
		sum1 += a[(n - 1) * (i + 1)];
	}

	printf("%d, %d\n", sum, sum1);
}
