#include "function_pointers.h"

/**
 * description:function that searches for an integer *
 * @array: Array of integers
 * @size: zize of array
 * @cmp: function pointer to compare values
 * return: 1 : vaalues founded , -1 : no matches or size<=0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	for (int i = 0; i < size; i++)
	{
	if (cmp(array[i]) == 1)
	return (i);
	}
	if (size <= 0)
	return (-1);
}
