#include "sort.h"
void q_sort(int *array, size_t size, int l, int h);
int partition(int *array, int l, int h, size_t size);

/**
 * quick_sort - sorts an array of integers in ascending order 
 * using the Quick sort algorithm
 * @array: array to sort
 * @size: size of the array
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
    int l, h;

    if (!array || size < 2)
        return;
        
    l = 0;
    h = size -1;
    q_sort(array, size, l, h);
}

/**
 * partition - implements the Lomuto partition scheme.
 * @array: array
 * @l: lower bound of unsorted array
 * @h: higher bound of unsorted array
 * @size: size of array
 * Return: the sorted position of pivot
 */
int partition(int *array, int l, int h, size_t size)
{
    int pivot, i, j, temp;

    pivot = array[h];
    i = l;
    j = h;
    while (i < j)
    {
        while (array[i] <= pivot)
            i++;
        while(array[j] > pivot)
            j--;
        
        if (i < j)
        {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
        print_array(array, size);
        }
    }
    temp = array[j];
    array[j] = array[h];
    array[h] = temp;
    print_array(array, size);
    return j;
}

/**
 * q_sort - quick sorts
 * @size: size of array
 * @l: lb
 * @h: hb
 * Return: nothing
 */
void q_sort(int *array, size_t size, int l, int h)
{
    int j;

    if (l < h)
    {
        j = partition(array, size, l, h);
        q_sort(array, size, l, j);
        q_sort(array, size, j + 1, h);
    }
}
