#include "main.h"
#include <stdio.h>

int main(void)
{
	int i, j;

	i = _printf("NULL input arg %c \n", NULL);
	j = printf("NULL input arg %c \n", NULL);
	printf("cus: %d; std: %d\n", i, j);
	return (0);
}
