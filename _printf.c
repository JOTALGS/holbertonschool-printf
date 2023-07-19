#include "main.h"
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int
_printf(const char *format, ...)
{
	va_list args;
	size_t i = 0;
	int y = 0;
	char op;
	char *str;

	va_start(args, format);
	while(format[i])
	{
		if (format[i] == '%')
		{
			op = format[i + 1];
			switch (op)
			{
				case 'c':
					_putchar(va_arg(args, int));
					break;
				case 's':
					str = va_arg(args, char*);
					while(str[y] != '\0')
					{
						_putchar(str[y]);
						y++;
					}
					break;
			}
		}
		else if (format[i] != op)
		{
			_putchar(format[i]);
		}
		i++;
	}
	return(0);
}
