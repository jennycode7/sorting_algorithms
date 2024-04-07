#include "sort.h"
#include <stdio.h>


/**
 * swap - swaps elements of an array
 * @a: array a
 * @b: array b
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}


/**
 * selection_sort - selection sorting
 * @array: array ot be sorted
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, x;

	for (i = 0; i < size - 1; i++)
	{
		x = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[x] > array[j])
			{
				x = j;
			}
		}
		if (x != i)
		{
			swap(&array[i], &array[x]);
			print_array(array, size);
		}
	}
}
