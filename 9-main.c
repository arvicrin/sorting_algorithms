#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int array[] = {19, 48, 99, 100, 200, 104, 1000, 1003, 71, 13, 999, 52, 96, 73, 86, 7, 1000000};
	size_t n = sizeof(array) / sizeof(array[0]);

	print_array(array, n);
	printf("\n");
	radix_sort(array, n);
	printf("\n");
	print_array(array, n);
	return (0);
}
