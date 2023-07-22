#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j;

	i = _printf("Char: %c\n", 'c');
	j = printf("Char: %c\n", 'c');
	printf("cus: %d; std: %d\n", i, j);

	return (0);
}
