#include "sort.h"
/**
 * selection_sort - is an in-place comparison sorting algorithm.
 * @array: Array of number to sort.
 * @size: Size of the array.
 *
 * Return: Void function ( Nothing).
 */
void selection_sort(int *array, size_t size)
{
	size_t i, temp, index, j;

	if (size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[index])
				index = j;
		}
		if (index != i)
		{
			temp = array[i];
			array[i] = array[index];
			array[index] = temp;
			print_array(array, size);
		}
	}
}
