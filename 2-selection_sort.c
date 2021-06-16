#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order using
 * selection sort
 * @array: the array to be sorted
 * @size: size of the array to be sorted
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	if (size == 0 || (!array))
		return;

	for (i = 0; i < size; i++)
	{
		j = i;
		for (; j < size; j++)
		{
			if (array[j] < array[i] && array[j] != array[i])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
}
