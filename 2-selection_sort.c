#include "sort.h"
void swap(int *xp, int *yp);

/*
 * selection_sort - a function that takes array to sort>
 * @*array: the array.
 * @size: the length of array.
 *
 * Return - sorted in selection
 */
void selection_sort(int *array, size_t size)
{
	unsigned long int i, j, min;
	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}	
		if (min != i)
		{
			swap(&array[i], &array[min]);
			print_array(array, size);
		}
	}
}

/*
 * swap - a functiontion that swaps the value.
 * @*xp: first arg.
 * @*yp: second arg
 *
 * Return - swapd values
 */
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
