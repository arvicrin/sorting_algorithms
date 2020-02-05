#include "sort.h"

/**
  * shell_sort - Selection sort
  * @array: array
  * @size: size
  * Return: nothing
  */
void shell_sort(int *array, size_t size)
{
	int gap = 1, i = 0, j = 0, si = size, save_num = 0;

	while (gap < si / 3)
		gap = (gap * 3) + 1;

	while (gap > 0)
	{
		for (i = gap; i < si; i++)
		{
			save_num = array[i];
			for (j = i; j >= gap && save_num < array[j - gap]; j -= gap)
				array[j] = array[j - gap];
			array[j] = save_num;
		}

		gap = (gap - 1) / 3;
		print_array(array, size);
	}
}
