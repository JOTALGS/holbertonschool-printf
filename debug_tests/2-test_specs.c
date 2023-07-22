#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int i, j;

	i = _printf("Many format specifiers: %c%s%%\n", 'c', " YEAH!");
	j = printf("Many format specifiers: %c%s%%\n", 'c', " YEAH!");
	printf("cus: %d; std: %d\n", i, j);
	return (0);
}
