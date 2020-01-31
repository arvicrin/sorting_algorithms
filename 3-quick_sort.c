#include "sort.h"
/**
 *partition - sorting by lomuto quick algorithm
 *@array:the array
 *@low_v: the pos to replace
 *@high_v: the minur pos in array
 */
size_t partition(int *array, size_t low_v, size_t high_v)
{
        size_t i = 0, j = 0;
	int pivot = 0, temp = 0, temp1 = 0;
  
        pivot = array[high_v];
        i = low_v;
	printf("puto3\n");
        for(j = low_v; j < high_v; j++)
        {
                if(array[j] < pivot)
                {
                        temp = array[i];
                        array[i] = array[j];
                        array[j] = temp;
                        i++;
                }
		printf("%u, %d-%d:%d\n", (unsigned int)j, pivot, array[9], array[j]);
        }
        temp1 = array[i];
        array[i] = array[high_v];
        array[high_v] = temp1;
        return(i);
}

/**
 *lomuto - sorting by lomuto quick algorithm
 *@array:the array
 *@low_v: the pos to replace
 *@high_v: the minur pos in array
 */
int *lomuto_al(int *array, size_t low_v, size_t high_v)
{
	size_t par = 0;

	printf("puto1\n");
	if(low_v < high_v)
	{
		printf("puto2\n");
		par = partition(array, low_v, high_v);
		lomuto_al(array, low_v, par - 1);
		lomuto_al(array, par + 1, high_v);
	}
	return(array);
}

/**
 *quick_sort - sorting by selection algorithm
 *@array:the array
 *@size: th array of the size
 */
void quick_sort(int *array, size_t size)
{
	size_t low_v = 0, high_v = 0;
	int *copy_arr = NULL;

	copy_arr = array;
	low_v = 0;
	high_v = size - 1;
	printf("puto\n");
	array = lomuto_al(copy_arr, low_v, high_v);
}
