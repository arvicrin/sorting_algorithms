#include "sort.h"

/**
  * counting_sort - Selection sort
  * @array: array
  * @size: size
  * Return: nothing
  */
void counting_sort(int *array, size_t size)
{
	int *counter = NULL, *copy = NULL, max_num = array[0], i = 0;

	if (size < 2)
		return;

	for (i = 0; i < (int) size; i++)
	{
		if (array[i] > max_num)
			max_num = array[i];
	}
	counter = malloc(sizeof(int) * (max_num + 1));
	copy = malloc(sizeof(int) * size);

	if (!counter || !copy)
		return;

	for (i = 0; i < max_num; i++)
		counter[i] = 0;

	for (i = 0; i < (int) size; i++)
		counter[array[i]] += 1;

	for (i = 1; i < (max_num + 1); i++)
		counter[i] += counter[i - 1];

	print_array(counter, (max_num + 1));

	for (i = 0; i < (int) size; i++)
	{
		copy[counter[array[i]] - 1] = array[i];
		counter[array[i]] -= 1;
	}
	for (i = 0; i < (int) size; i++)
		array[i] = copy[i];

	free(counter);
	free(copy);
}
