#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 when successful
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		while (alp != 'e' || alp != 'q')
			putchar(alp);
	}
	putchar('\n');
	return (0);
}

