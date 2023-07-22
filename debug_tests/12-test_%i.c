#include "main.h"
#include <stdio.h>

int main(void)
{
	int i, j;

	i = _printf("An integer such as %i\n", 5);
	j = printf("An integer such as %i\n", 5);
	printf("cus: %d; std: %d\n", i, j);

	return (0);
}
