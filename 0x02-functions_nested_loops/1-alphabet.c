#include "main.h"

/**
 * print_alphabet - prints alphabet
 *
 * Return: void
 *
 */

void print_alphabet(void)
{
	char i = 'a';

	for (i = 97; i <= 122; i++)
		_putchar(i);
	_putchar('\n');
}
