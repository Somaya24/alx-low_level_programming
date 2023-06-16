#include<stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*
*/
int main(void)
{
	char a;
	int b;
	float c;
	long int d;
	long long int e;

	printf("Size of a char: %lx byte(s)\n", sizeof(a));
	printf("Size of an int: %lx byte(s)\n", sizeof(b));
	printf("Size of a float: %lx byte(s)\n", sizeof(c));
	printf("Size of a long int: %lx byte(s)\n", sizeof(d));
	printf("Size of a long long int: %lx byte(s)\n", sizeof(e));
	
	return (0); 
}
