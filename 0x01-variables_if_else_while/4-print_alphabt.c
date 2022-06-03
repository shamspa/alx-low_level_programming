#include <stdio.h>
/**
 * main - main function
 * Description: print letters except ne and q
 * Return: 0
 */
int main(void)
{
	char alpha_ = 'a';

	while (alpha_ <= 'z')
	{
		if (alpha_ != 'e' && alpha_ != 'q')
		{
			putchar(alpha_);
		}
		alpha_++;
	}

	putchar('\n');
	return (0);
}
