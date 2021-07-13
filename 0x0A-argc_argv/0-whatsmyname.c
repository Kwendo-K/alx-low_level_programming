#include "holberton.h"
#include <stdio.h>

/**
 *main - prints the name of the program
 *argc: arguement counter
 *@argv: pointer to array of arguements
 *Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc >= 0)
		printf("%s\n", argv[0]);

	return (0);
}
