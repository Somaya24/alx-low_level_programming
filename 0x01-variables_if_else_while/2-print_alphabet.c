#include <stdio.h>
/**
 * main - print the alphabet.
 *
 * Return : Always 0
 *
 */
int main(void)
{
	char alp[26] = "abcefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
