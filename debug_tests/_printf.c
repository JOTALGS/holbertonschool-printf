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
		putchar('-');
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
	for(j = i - 1; j > -1; j--)
	{
		dg = arr[j] + '0';
		putchar(dg);
		ct++;
	}
	return (ct);
}

int
_printf(const char *format, ...)
{
	va_list args;
	size_t i = 0;
	int y = 0;
	char op;
	char *str;
	int dgt;
	int len = 0;

	if (!format)
		return (0);

	va_start(args, format);
	while(format[i])
	{
		if (format[i] == '%')
		{
			op = format[i + 1];
			switch (op)
			{
				case 'c':
					putchar(va_arg(args, int));
					len++;
					break;
				case 's':
					str = va_arg(args, char*);
					while(str[y] != '\0')
					{
						putchar(str[y]);
						len++;
						y++;
					}
					break;
				case 'd':
					dgt = va_arg(args, int);
					len += prt_int(dgt);
					break;
				case 'i':
					dgt = va_arg(args, int);
					len += prt_int(dgt);
					break;
				case '%':
					putchar(format[i + 1]);
					len++;
					break;
				default:
					putchar(format[i + 1]);
					len ++;
					break;
			}
			if (format[i + 1] == '%')
				op = 'o';
		}
		else if (format[i] != op)
		{
			putchar(format[i]);
			len++;
		}
		i++;
	}
	return (len);
}
