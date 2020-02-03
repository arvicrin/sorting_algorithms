#include "sort.h"
/**
 *swap - sorting by selection algorithm
 *@array:the array
 *@pos: the pos to replace
 *@x: the minur pos in array
 */
void swap(int *array, size_t pos, size_t x)
{
	int tmp = array[pos];

	array[pos] = array[x];
	array[x] = tmp;
}
/**
 *selection_sort - sorting by selection algorithm
 *@array:the array
 *@size: th array of the size
 */
void selection_sort(int *array, size_t size)
{
	size_t pos = 0, j = 0, minur = 0, x;

	if (size < 2)
		return;
	for (; pos < size; pos++)
	{
		minur = array[pos];
		x = pos;
		for (j = pos; j < size; j++)
		{
			if (array[j] < minur)
			{
				minur = array[j];
				x = j;
			}
		}
		if (x != pos)
		{
			swap(array, pos, x);
			print_array(array, size);
		}
	}
}
