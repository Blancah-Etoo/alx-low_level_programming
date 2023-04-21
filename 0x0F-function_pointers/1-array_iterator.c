#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array elem on a newly
 * @array: array
 * @size: how many elem tp print
 * @action: pointer to print in the regular or hox
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
