#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function
 * Description: print the alphabet in lower case
 * Return: 0
 */
int main(void)
{
	char lower_alpha = 'a';

	while (lower_alpha <= 'z')
	{
		putchar(lower_alpha);
		lower_alpha++;
	}

	char upper_alpha = 'A';

	while (upper_alpha <= 'Z')
	{
		putchar(upper_alpha);
		upper_alpa++;
	}

	putchar('\n');
	return (0);
}