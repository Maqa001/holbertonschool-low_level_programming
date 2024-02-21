#include <stdio.h>

/**
  * main - Prints the numbers since 0 to 9
  *
  * Return: Always (Success)
  */

int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);

}
