#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main()
{
    int res;

    res = create_file("test", NULL);
    printf("-> %i)\n", res);
    return (0);
}
