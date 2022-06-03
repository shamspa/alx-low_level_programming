#include <stdio.h>
/**
 * main - main function
 * Description: get base 10 digits without using char
 * Return: 0
 */
int main(void)
{
	int dig_ = 0;

	while (dig_ < 10)
	{
		putchar(48 + dig_);
		dig_++;
	}

	putchar('\n');
	return (0);
}
