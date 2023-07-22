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

	i = _printf("Percent symbol: %%\n");
	j = printf("Percent symbol: %%\n");
	printf("cus: %d; std: %d\n", i, j);
	return (0);
}
