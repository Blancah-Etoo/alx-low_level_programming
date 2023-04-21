#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of argurment passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va
_arg(list, int));
					break;
				case '1':
					printf("%s%d", sep, va
_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va

_arg(list, int));
					break;
				case 's':
					str = va_arg(list, char
*);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str
r);
					break;
				default:
					i++;
					continue;
			}
			sep = ",";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
