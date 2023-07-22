#include "main.h"
#include <stdio.h>

int main(void)
{
int i, j;

printf("_printf correctly handles NULL passed as format str: \n");
i = _printf(NULL);
j = printf(NULL);
printf("cus: %d; std: %d\n", i, j);

return (0);
}
