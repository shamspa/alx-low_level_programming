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

	lowe_alpha = 'A';

	while (lower_alpha <= 'Z')
	{
		putchar(lower_alpha);
		lower_alpha++;
	}

	putchar('\n');
	return (0);
}
