#include "sort.h"
#include <stdio.h>


/**
 * swap - swap two integers
 * @a: A pointer to an integer
 * @b: A pointer to an Integer
 * Return: void
 */
void swap(int *a, int *b)
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
	size_t i, k;

	if (!array || size == 0)
		return;

	for (k = 0; k < size - 1; k++)
	{
		i = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(&array[i], &array[i + 1]);
				print_array(array, size);
			}
		}
	}
}
