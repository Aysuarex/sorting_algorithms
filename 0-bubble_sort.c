#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - sorts an array of integers in ascending order
 *
 * @array: The array of integer
 * @size: The size of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int tmp = 0;

	while (1)
	{
		i = 0;
		while (i < size - 1 && array[i] < array[i + 1])
			i++;

		if (i == size - 1)
			break;

		while (i < size - 1)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
			}
			i++;
		}
	}
}
