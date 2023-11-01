#include <stdio.h>

#include "main.h"

/**
 * main - Entry point of the program
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Description: This function prints the name of the program.
 * It takes the program name from the command-line arguments
 * and prints it to the standard output.
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
    printf("%s\n", *argv);

    return (0);
}

