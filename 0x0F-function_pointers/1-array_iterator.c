#include "function_pointers.h"

/**
 * array_iterator: function that executes a function
 *                 given as a parameter
 * 
 * @array: array of integers
 * @size: size of array 
 * @action: function pointer that point to a function 
 *          take integer in parameter
 * 
 * return : nothing
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
    int i;

    for(i = 0 ;i<size ; i++)
    {
        action(array[i]);

    }

}
