#include "holberton.h"

/**
 *main - prints the string "Holberton" from a character array.
 *Return: 0 on success.
 */
int main(void)
{
	char h[] = "Holberton";
	int c;

	for (c = 0; c < 9; c++)
	{
		_putchar(h[c]);
	}
	_putchar('\n');
	return (0);
}
