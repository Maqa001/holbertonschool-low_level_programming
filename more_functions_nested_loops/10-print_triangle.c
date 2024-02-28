#include "main.h"

/**
*
*
*
*/

void print_triangle(int size)
{
	int i, j, z;
	
	if (size <= 0)
		_putchar('\n');
	for (i = 1; i < size; i++)
	{
		for (j = size; i--)
		{
			_putchar(' ');
			for (z = 1; z < size; z++)
				_putchar('#');
				_putchar('\n');
		}
	}

}
