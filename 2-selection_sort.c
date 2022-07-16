#include "sort.h"


/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: The array
 * @size: The size of the array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, k = 0, j = -1;
	int tmp;

	for (i = 0; i < size; i++)
	{
		j = i;
		for (k = i; k < size; k++)
		{
			if (array[k] < array[j])
				j = k;
		}

		if (array[j] < array[i])
		{
			tmp = array[j];
			array[j] = array[i];
			array[i] = tmp;
			print_array(array, size);
		}
	}

}
