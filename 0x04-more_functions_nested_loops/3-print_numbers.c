#include "holberton.h"

/**
 * main - a program that prints numbers from 0-9
 *
 * Return: 0
 */
void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		_putchar(c);
		n++;
	}
	_putchar('\n');
}
