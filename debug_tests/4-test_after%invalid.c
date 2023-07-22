#include "main.h"
#include <stdio.h>

int main(void)
{
	int i, j;

	i = _printf("Handling unrecognised format specifiers correctly %? %c%s\n", '#', "Aye!");
	j = printf("Handling unrecognised format specifiers correctly %? %c%s\n", '#', "Aye!");
	printf("cus: %d; std: %d\n", i, j);

	return (0);
}
