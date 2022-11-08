#include "sort.h"

/**
 * selection_sort -	sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: the array
 * @size: size of the array
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	int i, j, siz = size, min, temp;

	for (i = 0; i < siz - 1; i++)
	{
	min = i;
	for (j = i + 1; j < siz; j++)
	{
	if (array[j] < array[min])
	{
	min = j;
	}
	}
	if (min != i)
	{
	temp = array[min];
	array[min] = array[i];
	array[i] = temp;
	print_array(array, size);
	}
	}
}
