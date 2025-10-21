#include "main.h"

/**
 * print_triangle - prints a triangle of '#' characters
 * @size: the size of the triangle
 *
 * Description: Prints a right-aligned triangle where
 * each row increases in number of '#' characters.
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
				_putchar(' ');
			for (j = 1; j <= i; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}

