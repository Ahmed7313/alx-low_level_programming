#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * print_char - Prints a char.
 * @args: A list of arguments pointing to
 *        the character to be printed.
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - Prints an integer.
 * @args: A list of arguments pointing to
 *        the integer to be printed.
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a float.
 * @args: A list of arguments pointing to
 *        the float to be printed.
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_str - Prints a string.
 * @args: A list of arguments pointing to
 *        the string to be printed.
 */
void print_str(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}

/**
 * print_all - Prints anything.
 * @format: A list of types of arguments passed to the function.
 * @...: A value for each type in @format.
 */
void print_all(const char * const format, ...)
{
	printer_t printers[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str},
		{0, NULL}
	};
	va_list args;
	unsigned int i = 0, j;
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (printers[j].symbol)
		{
			if (format[i] == printers[j].symbol)
			{
				printf("%s", separator);
				printers[j].print(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
