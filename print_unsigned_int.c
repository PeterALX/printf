#include "main.h"


/**
* print_unsigned_int - takes an int and prints it
* @k: the int to be printed
*
* Return: the number of chars printed
*/
int print_unsigned_int(unsigned int k)
{
	char *str;
	int count = 0;
	unsigned int rem;
	int char_count = 0;

	if (k == 0)
	{
		_putchar('0');
		char_count++;
		return (char_count);
	}
	rem = k;
	while (rem > 0)
	{
		count++;
		rem /= 10;
	}
	str = malloc(sizeof(char) * count + 1); /* add null check */
	str[count] = '\0';
	rem = k;
	while (rem > 0)
	{
		str[count - 1] = (rem % 10) + 48;
		rem /= 10;
		count--;
	}
	while (str[count])
	{
		_putchar(str[count]);
		char_count++;
		count++;
	}
	free(str);
	return (char_count);
}
