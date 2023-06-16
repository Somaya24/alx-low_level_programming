#include<stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*
*/
int main(void)
{
	printf("Size of char: %lx byte(s)\n", sizeof(char));
	printf("Size of int: %lx byte(s)\n", sizeof(int));
	printf("Size of float: %lx byte(s)\n", sizeof(float));
	printf("Size of long int: %lx byte(s)\n", sizeof(long int));
	printf("Size of long long int: %lx byte(s)\n", sizeof(long long int));
	return (0); }
