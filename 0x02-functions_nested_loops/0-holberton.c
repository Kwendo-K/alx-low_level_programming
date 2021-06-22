#include "holberton.h"

/**
 *main - function to print holberton
 *
 *return 0 (success)
 *
 */
int main(void)
{
	char h[] = "holberton";
	int c;

	for (c = 0; c < 9; c++)
	{
		_putchar(h[c]);
	}
	_putchar('\n');
	return (0);
}
