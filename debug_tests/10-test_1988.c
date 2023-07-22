#include "main.h"
#include <stdio.h>

int main(void)
{
	int i = 0, j = 0;

	i = _printf("My year: %d\n", 1988);
	j = printf("My year: %d\n", 1988);
	printf("cus: %d; std: %d\n", i, j);
	return (0);
}
