#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * Description: print alphabet in reverse lowercase
 * Return: 0
 */
int main(void)
{
	char lower_alpha = 'z';

	while (lower_alpha >= 'a')
	{
		putchar(lower_alpha);
		lower_alpha--;
	}

	putchar('\n');
	return (0);
}
