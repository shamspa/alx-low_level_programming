#include "main.h"
/**
 *main - main function
 *Description: program that prints _putchar
 *Return: 0
 */
int main(void)
{
    char c[8] = "_putchar";
    int i = 0;
    while (i < 8)
    {
    _putchar(c[i]);
    i++;
    }
    _putchar('\n');
    return (0);
}
