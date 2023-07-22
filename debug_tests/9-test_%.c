#include "main.h"
#include <stdio.h>

int main(void)
{
	int i, j;

	printf("Function behavior when single %: \n");
	i = _printf("%");
	j = printf("%");
	printf("cus: %d; std: %d\n", i, j);
	return (0);
}
