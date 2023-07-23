#include "main.h"
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int
prt_int(int n)
{
	int arr[100];
	int i = 0;
	int j, r;
	char dg;
	int ct = 0;

	if (n < 0)
	{
		_putchar('-');
		ct++;
		n = -n;
	}
	while (n != 0)
	{
		r = n % 10;
		arr[i] = r;
		i++;
		n = n / 10;
	}
	for (j = i - 1; j > -1; j--)
	{
		dg = arr[j] + '0';
		_putchar(dg);
		ct++;
	}
	return (ct);
}

int
_printf(const char *format, ...)
{
	va_list args;
	size_t i = 0;
	int y;
	char *str;
	int dgt;
	int len = 0;

	if (!format)
	{
		return (-1);
	}
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
			case 'c':
				_putchar(va_arg(args, int));
				len++;
				i++;
				break;
			case 's':
				str = va_arg(args, char *);
				if (str)
				{
					for (y = 0; str[y] != '\0'; y++)
					{
						_putchar(str[y]);
						len++;
					}
				}
				else
				{
					_putchar('(');
					_putchar('n');
					_putchar('u');
					_putchar('l');
					_putchar('l');
					_putchar(')');
					len += 6;
				}
				i++;
				break;
			case 'd':
				dgt = va_arg(args, int);
				len += prt_int(dgt);
				i++;
				break;
			case 'i':
				dgt = va_arg(args, int);
				len += prt_int(dgt);
				i++;
				break;
			case '%':
				_putchar(format[i + 1]);
				len++;
				i++;
				break;
			case '\0':
				return (-1);
			default:
				_putchar(format[i]);
				len++;
				break;
		}
		}
		else
		{
			_putchar(format[i]);
			len++;
		}
		i++;
	}
	va_end(args);
	return (len);
}
