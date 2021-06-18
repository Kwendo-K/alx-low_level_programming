#include <stdio.h>
/**
 *main - print if the number is postive, zero, or negative
 *Description: using the main function
 * Return: 0
 */
int main(void)
{
	char h;

	for (h = '0' ; h <= '9' ; h++)
	{
		putchar(h);

		if (h != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
