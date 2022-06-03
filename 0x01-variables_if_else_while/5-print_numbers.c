#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * Description: get digits of base 10
 * Return: 0
 */
int main(void)
{
	char dig_ = '0';

	while (dig_ <= '9')
	{
		putchar(dig_);
		dig_++;
	}

	putchar('\n');
	return (0);
}
