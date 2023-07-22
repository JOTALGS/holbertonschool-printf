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

	i = _printf("Hey ho, let's go!\n");
	j = printf("Hey ho, let's go!\n");
	printf("cus: %d; std: %d\n", i, j);

	return (0);
}

