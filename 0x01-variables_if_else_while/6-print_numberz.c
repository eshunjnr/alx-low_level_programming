#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (successful)
 */
int main(void)
{
	int n = 0;

	for (n = 0; n < 10; n++)
		putchar(n + '0');
	putchar('\n');
	return (0);
}
