#ifndef _MAIN_
#define _MAIN_

/**
 * _putchar - writes the character c to stdout
 * @c: parameter to compare
 * Return: 1 or 0
 */

int _putchar(char c);

/**
 * reset_to_98 - resets variable to 98
 *
 * @n: variable with pointer
 */

void reset_to_98(int *n);

/**
 * swap_int - swaps integer values
 * @a: first integer
 * @b: second integer
 */

void swap_int(int *a, int *b);

/**
 * _strlen - length of string
 * @s: string
 *
 * Return: returns length
 */

int _strlen(char *s);

/**
 * _puts - prints something with new line
 *
 * @str: string to put
 */

void _puts(char *str);
#endif