#include "sort.h"
#include <stdio.h>


/**
 * buuble_sort - check the code for
 * array: array of data
 * size: size of array
 * Return: Always EXIT_SUCCESS.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp;
	int flag = 0;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				flag = 1;
				print_array(array, size);
			}
		}

		if (flag == 0)
		{
			break;
		}
	}
}
