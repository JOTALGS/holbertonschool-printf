#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;

    len = _printf(NULL);
    len2 = printf(NULL);
    printf("1:%d 2:%d\n", len, len2);
    return (0);
}
