#include "main.h"

/**
 * main - Entry block
 * Description: prints  on new line
 * Return: 0
 */
int main(void)
{
	char c[9] = "_putchar";

	int i = 0;

	while (i < 10)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
