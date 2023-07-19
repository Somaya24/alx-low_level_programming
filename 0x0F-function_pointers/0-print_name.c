#include <stdio.h>
#include "function_pointers.h"

/**
 * print a name
 *
 * @name of the person
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	printf("My name is %s\n", name);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_name("Soma", print_name);
	return (0);
}
