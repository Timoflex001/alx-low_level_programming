#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: void
 *
 */

void print_alphabet_x10(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		char j = 'a';

		for (j = 97; j <= 122; j++)
			_putchar(j);
		_putchar('\n');
		i++;
	}
}
