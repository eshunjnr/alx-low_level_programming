#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (when successful)
 */
int main(void)
{
	char alp;
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	for (alp = 'a'; alp <= 'f'; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
