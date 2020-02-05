#include "sort.h"

/**
  * counting_sort - Selection sort
  * @array: array
  * @size: size
  * Return: nothing
  */
void counting_sort(int *array, size_t size)
{
	int *counter = NULL, max_num = array[0], i = 0, si = size;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < si; i++)
		if (array[i] > max_num)
			max_num = array[i];

	counter = malloc(sizeof(int) * (max_num + 1));
	if (!counter)
		return;

	for (i = 0; i < max_num + 1; i++)
		counter[i] = 0;

	for (i = 0; i < si; i++)
		counter[array[i]] += 1;

	for (i = 0; i < max_num + 1; i++)
		if (i - 1 >= 0)
			counter[i] += counter[i - 1];

	print_array(counter, max_num + 1);
	free(counter);
}
