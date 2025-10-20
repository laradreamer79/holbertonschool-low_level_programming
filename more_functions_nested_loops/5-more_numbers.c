#include "main.h"

/**
 * more_number - prints 10 times from 0 to 14 followed by a new line
 *
 * return: Always 0
 */

	void more_numbers(void)
	{
		int i, j;

		for (i = 1; i <= 10; i++)
		{
			for (j = 1; j <= 14; j++)
			{
				if (j >= 10)
					_putchar('1');
				_putchar((j % 10) + '0');
			}
		}
		  _putchar ('\n');
		}
	}
