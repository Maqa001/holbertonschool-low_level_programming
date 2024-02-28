#include "main.h"

/**
  * print_square - funtion 
  * @size: argument
  * Return: good
  */ 

void print_square(int size)
{
        int i, j;

        if (size <= 0)
                _putchat('\n');

        for (i = 0; i < size; i++)
        {
                for (j = 0; j < i; j++)
                {
                        _putchar('#');
                }
                _putchar('\n');
        }

}
