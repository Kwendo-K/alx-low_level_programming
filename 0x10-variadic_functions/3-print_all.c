#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *print_char - prints char
 *@valist: valist
 */
void print_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}

/**
 *print_int - prints int
 *@valist: valist
 */
void print_int(va_list valist)
{
	printf("%d", va_arg(valist, int));
}

/**
 *print_float - prints float
 *@valist: valist
 */
void print_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}
