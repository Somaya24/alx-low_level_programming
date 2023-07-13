#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - check the code
 *
 *Return: Always 0
 */
int main(void)
{
	int *n;

	n = malloc_checked(sizeof(int)* 98);
	printf("%p\n", (void *)n);
	free(n);
	return (0);
}
