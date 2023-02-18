#include <stdio.h>

/**
 * main - lower case alphabets
 * Return: 0 (successful)
 */

int main(void)

{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}

