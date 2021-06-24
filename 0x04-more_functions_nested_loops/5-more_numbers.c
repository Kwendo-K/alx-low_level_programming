#include "holberton.h"

/**
 * main - a program that prints 0-14 ten times
 *
 * Return: 0
 */
void more_numbers(void)
{
	char c;
	char i;

	for (c = '0'; c <= '14'; c++)
	{
		for (i = '0'; i <= '10'; i++)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
