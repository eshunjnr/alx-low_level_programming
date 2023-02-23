#include "main.h"

/**
 * main - point of entry
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 * Return - Always 0 (successful)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);

	_putchar('\n');
	return (0);
}
