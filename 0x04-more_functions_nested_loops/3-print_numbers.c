#include "holberton.h"

/**
 * main - a program that prints numbers from 0-9
 *
 * Return: 0
 */
void print_numbers(void)
{
	char n = '0';

	while (n <= '9')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
