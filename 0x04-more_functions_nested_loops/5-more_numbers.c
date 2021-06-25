#include "holberton.h"

/**
 * more_numbers - Prints the numbers from 0 to 14 ten times.
 */

void more_numbers(void)
{

	int renglon, num;

	for (renglon = '0'; renglon <= '9'; renglon++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar (num / 10 + '0');
			}
			_putchar (num % 10 + '0');
		}

		_putchar ('\n');
	}
}
