#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * Description: practise
 * Return: 0
 */
int main(void)
{
	int dig_ = 0;

	while (dig_ < 10)
	{
		putchar(48 + dig_);
		if (dig_ != 9)
		{
			putchar(',');
			putchar(' ');
		}
		dig_++;
	}
	putchar('\n');
	return (0);
}
