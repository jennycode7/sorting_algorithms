#include <stdio.h>
#include "sort.h"

/**
 * insert_sort - ssorting by insertion
 * @array: array to be sorted
 * @size: size of the array
 */
void insert_sort(int *array, size_t size)
{
	size_t i;
	int j, temp;

	for (i = 1; i < size; i++)
	{
		temp = array[i];
		j = i - 1;
		while (j >= 0 && array[j] > temp)
		{
			array[j + 1] = array[j];
			j--;
		}
		array[j + 1] = temp;
	}
}
