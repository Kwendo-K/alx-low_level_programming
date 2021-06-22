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
	unsigned int c;

	for (c = 0; < sizeof(h); c++)
	{
		_putchar(h[c]);
	}
	_putchar("\n");
	return (0);
}
