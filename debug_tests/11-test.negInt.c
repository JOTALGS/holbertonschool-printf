#include "main.h"
#include <stdio.h>

int main(void)
{
	int i, j;

	i = _printf("I am %d\n", -36);
	j = printf("I am %d\n", -36);
	printf("cus: %d; std: %d\n", i, j);

	return (0);
}
