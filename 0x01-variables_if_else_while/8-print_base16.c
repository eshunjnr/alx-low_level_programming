#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (when successful)
 */
int main(void)
{
	char alp;
	int i;

	for (i = 0; i <= 16; i++)
	for (alp = 'a'; alp <= 'f'; alp++)
	{
		if (i >= 10)
			putchar(alp);
		else if (i < 10)
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
