#include "main.h"
#include "stdio.h"

int main(void)
{
	int i, j;

	i = _printf("Handling unrecognised format specifier % $\n");
	j = printf("Handling unrecognised format specifier % $\n");
	printf("cus: %d; std: %d\n", i, j);
	return (0);
}
