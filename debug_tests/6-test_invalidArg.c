#include "main.h"
#include <stdio.h>

int main(void)
{
	int i, j;

	i = _printf("Invalid arg %c #\n");
	j = printf("Invalid arg %c #\n");
	printf("cus: %d; std: %d\n", i, j);

	return (0);
}
