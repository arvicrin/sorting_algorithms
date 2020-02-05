#include "sort.h"

/**
  * counting_sort - Selection sort
  * @array: array
  * @size: size
  * Return: nothing
  */
void counting_sort(int *array, size_t size)
{
	int counter[200000], c_p[200000], c_a[200000];
	int max_num = array[0], i = 0, si = size, num = 0;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < si; i++)
	{
		c_a[i] = array[i];
		if (array[i] > max_num)
			max_num = array[i];
		counter[array[i]] += 1;
	}

	for (i = 0; i < max_num + 1; i++)
		if (i - 1 >= 0)
			counter[i] += counter[i - 1];

	print_array(counter, max_num + 1);

	for (i = 0; i < si; i++)
	{
		num = counter[c_a[i]] - 1;
		c_p[num] = c_a[i];
		array[num] = c_p[num];
		counter[c_a[i]] -= 1;
	}
}
