#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALXSchool students.
 *
 * Return: Always 0 when correct.
 */
int main(int ac, char *av[])
{
    char *s;

    s = argstostr(ac, av);
    if (s == NULL)
    {
        return (1);
    }
    printf("%s", s);
    free(s);
    return (0);
}
