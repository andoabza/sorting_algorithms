#include "sort.h"
/**
 * bubble_sort - A function that sort arrays of integer.
 * @array: given array
 * @size: number of numbers
 *
 * Return : array by swaping two element
 */
void swap(int* xp, int* yp);
void bubble_sort(int *array, size_t size)
{
	unsigned long int i;
	unsigned long int j;
	for(i=0; i < size - 1; i++)
	{
		for(j=0; j < size - i - 1; j++)
		{
			if(array[j] > array[j+1]){
				swap(&array[j], &array[j+1]);
			}
		} 
	}
}	
void swap(int* xp, int* yp)
    {
        int temp = *xp;
        *xp = *yp;
        *yp = temp;
    }
