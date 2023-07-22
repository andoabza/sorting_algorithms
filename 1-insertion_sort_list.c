#include "sort.h"

/*
 * insertion_sort_list - a function that sort list in insertion sort
 * Return - a pointer to a sorting of insertion.
 *
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *unsorted = (*list)->next;
    	if (*list == NULL || (*list)->next == NULL)
        	return;
    	while (unsorted != NULL)
    	{
   	    	listint_t *current = unsorted;
       		unsorted = unsorted->next;
        	while (current->prev != NULL && current->n < current->prev->n)
       		{
            	current->prev->next = current->next;
            	if (current->next != NULL)
                	current->next->prev = current->prev;
            	current->next = current->prev;
            	current->prev = current->prev->prev;
            	current->next->prev = current;
	    	print_list(*list);
           	if (current->prev == NULL)
                	*list = current;
            	else
               		current->prev->next = current;
        	}
	}
}	
