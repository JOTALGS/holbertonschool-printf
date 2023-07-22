#include "main.h"
#include <stdio.h>

int main(void)
{
	int i, j;

	i = _printf("Incomplete format specifier, %\n");
	j = printf("Incomplete format specifier, %\n");
	printf("cus: %d; std: %d\n", i, j);
	return (0);
}
