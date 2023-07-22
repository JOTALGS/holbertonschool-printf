#include "main.h"
#include <stdio.h>

int
main(void)
{
	int i, j;

	i = _printf("Incomplete call spec %");
	j = printf("Incomplete call spec %");
	printf("cus: %d; std: %d\n", i, j);

	return (0);
}
