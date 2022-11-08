#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending
 * order using the Bubble sort algorithm
 * @array: array of type int
 * @size: size of te array
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp;

	for (j = 1; j < size; j++)
	{
	i = 0;
	while (array && i < size - 1)
	{
		if (array[i] > array[i + 1])
		{
		temp = array[i];
		array[i] = array[i + 1];
		array[i + 1] = temp;
		print_array(array, size);
		}
	++i;
	}
	i = 0;
	}
}
