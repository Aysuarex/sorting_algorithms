#include "sort.h"
#include <stdio.h>


/**
 * swap - swapt two values
 * @a: A pointer to an integer
 * @b: A pointer to an integer
 *
 * Return: void
 */
static void swap(int *a, int *b)
{
	static int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

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
	int tmp;

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
				swap(array + i, array + i + 1);
				print_array(array, size);
			}
			i++;
		}
	}
}
