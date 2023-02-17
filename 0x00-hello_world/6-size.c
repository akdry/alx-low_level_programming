#include <stdio.h>
#include <stdint.h>

/**
 * main - Entry point
 * printf: Prints sizes of characters
 * Return: 0
 */
int main(void)
{
    char a;
    int b;
    long int c;
    long long int d;
    float f;

    printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
    printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
    printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
    printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
    printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

    /* check if machine is 32-bit or 64-bit */
    if (sizeof(void *) == 4)
    {
        uint32_t ptr_size = sizeof(void *);
        printf("Size of a pointer: %u byte(s)\n", ptr_size);
    }
    else
    {
        printf("Size of a pointer: %lu byte(s)\n", (unsigned long)sizeof(void *));
    }

    return (0);
}

