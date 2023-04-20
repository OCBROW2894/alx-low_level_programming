#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name_as_is - prints a name
 * @name: name of the person
 *
 * Return: No return value.
 */
void print_name_as_is(char *name)
{
    printf("Heeey, my name is %s\n", name);
}

/**
 * print_name_uppercase - prins out a name in uppercase
 * @name: name of the person
 *
 * Return: No return value.
 */
void print_name_uppercase(char *name)
{
    unsigned int i;

    printf("Heeey, my name in uppercase is ");
    i = 0;
    while (name[i])
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            putchar(name[i] + 'A' - 'a');
        }
        else
        {
            putchar(name[i]);
        }
        i++;
    }
}

/**
 * main - where the code starts compiling
 *
 * Return: Always 0 when correct.
 */
int main(void)
{
    print_name("Bryian", print_name_as_is);
    print_name("Ocbrow Eldian", print_name_uppercase);
    printf("\n");
    return (0);
}
