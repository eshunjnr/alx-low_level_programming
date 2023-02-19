#include <stdio.h>
/**
 * main - Entry pint for the fxn
 *
 * Return: Always 0 (successful)
 */
int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	putchar(alp[i]);
	putchar('\n');
	return (0);
}

