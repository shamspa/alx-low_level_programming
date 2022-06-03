#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * Description: get base 16 lower case
 * Return: 0
 */
int main(void)
{
	char base_16 = '0';

	while (base_16 <= '9')
	{
		putchar(base_16);
		base_16++;
	}

	base_16 = 'a';

	while (base_16 <= 'f')
	{
		putchar(base_16);
		base_16++;
	}

	putchar('\n');
	return (0);
}
