/**
 * @file 6-size.c
 * @brief Prints the size of various types on the computer it is compiled and run on.
 *
 * The program prints the size of char, int, long int, long long int, and float types in bytes.
 *
 * Return: Always 0.
 */

#include <stdio.h>
/**
 * The main function of the program.
 *
 * This function prints the size of various types in C.
 *
 * @return 0 if the program ran successfully.
 */
int main(void)
{
printf("Size of a char: %ld byte(s)\n", sizeof(char));
printf("Size of an int: %ld byte(s)\n", sizeof(int));
printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
printf("Size of a float: %ld byte(s)\n", sizeof(float));

return (0);
}

