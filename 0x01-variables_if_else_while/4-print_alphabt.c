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
		putchar(alp);
		if (alp == 'e' || alp == 'q')
			continue;
	}
	putchar('\n');
	return (0);
}

