#include "sort.h"
void quick_sort(int *array, size_t size);
void swap(int *a, int *b);
int partition(int *array,int l, int h);
void q_sort(int *array, int l, int h);
/**
 *quick_sort - sorts an array of integers in ascending order using 
 * the Quick sort algorithm
 * @array: an array of integers
 * @size: size of the array
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	q_sort(array, 0, size -1);
}
/**
 * swap - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * partition - function tahat returns the partitioning position when 
 * the last element of an unsorted array is chosen as pivot
 * @array: array to sort
 * @l: the left-most element of an unsorted array
 * @h: the right-most element of an unsorted array
 * returns: the sorted position of the pivot element
 */
int partition(int *array,int l, int h, size_t size)
{
    int pivot = array[h], i = l, j = h;

    while (i < j)
    {
        while (array[j] > pivot)
            j--;
        while (array[i] <= pivot)
            i++;
        if (i < j)
        {
            swap(array + j, array + i);
            print_array(array, size);
        }
    }
    swap(array[h], array[j]);
    return j;
}   
/**
 * q_sort - sorts array
 * @l: lower limit
 * @h: higher limit
 */
void q_sort(int *array, int l, int h, size_t size)
{
    int j;

    if (l < h)
    {
    j = partition(array,l, h, size)    
    q_sort(array, l, j);
    q_sort(array, j + 1, h);
    }
}
