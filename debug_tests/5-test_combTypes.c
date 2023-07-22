#include "main.h"
#include <stdio.h>
int main(void)
{
	int i, j;

	i = _printf("Combination of types specified? %c%s%%\n", 'A', "YE!");
	j = printf("Combination of types specified? %c%s%%\n", 'A', "YE!");
	printf("cus: %d; std: %d\n", i, j);
	return (0);
}
