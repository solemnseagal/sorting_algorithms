#include "sort.h"

/**
 *swap - swaps two integers.
 *@xp: Pointer to the first integer.
 *@yp: Pointer tothe second integer.
 *Return: Nothing.
 */
void swap(int *xp, int *yp)
{
	int tepr = *xp;
	*xp = *yp;
	*yp = tepr;
}

/**
 *bubble_sort - Sorts an array of integers in ascending order
 *@array: An array of integers to be sorted.
 *@size: Size of the array.
 *Return: Nothing.
 */
void bubble_sort(int *array, size_t size)
{
	size_t firstNum, secondNum;

	if (array == NULL || size == 0)
		return;

	for (firstNum = 0; firstNum < size - 1; firstNum++)
	{
		for (secondNum = 0; secondNum < size - 1; secondNum++)
		{
			if (array[secondNum] > array[secondNum + 1])
			{
				swap(&array[secondNum], &array[secondNum + 1]);
				print_array(array, size);
			}
		}
	}
}
