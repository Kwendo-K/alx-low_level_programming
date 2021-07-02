#include "holberton.h"

/**
 * main - *_strncpy function
 *
 * description: concatinating two strings
 *
 * @dest - first parameter
 * @src - second parameter
 * @n - third parameter
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
