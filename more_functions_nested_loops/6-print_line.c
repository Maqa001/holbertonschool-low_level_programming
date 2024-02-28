#include "main.h"

/**
* print_line - fct jhk
* _putchar - is function
* @n: number of times
* Return: retn void
*/
void print_line(int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		_putcahr('_' * i);
	}
	_putcahr('\n');
}
