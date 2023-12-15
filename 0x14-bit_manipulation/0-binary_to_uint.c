#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;
	int blen = strlen(b);
	int decimal = 1, i;

	if (b == NULL)
		return (0);

	for (i = (blen - 1); i >= 0; i--)
	{
		if (b[i] == '1')
			total = total + decimal;
		decimal = decimal * 2;
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	return (total);
}
