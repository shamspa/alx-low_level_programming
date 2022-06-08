#include "main.h"
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
		_putchar(lower_alpha);
		lower_alpha++;
	}
	_putchar('\n');
	return (0);
}
