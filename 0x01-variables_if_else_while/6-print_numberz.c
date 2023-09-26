#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all single-digit numbers of base 10
 *              starting from 0, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i; // Use tabs for indentation

	for (i = 0; i < 10; i++) // Use tabs for indentation
	{
		putchar(i + '0'); // Use tabs for indentation
	}

	putchar('\n'); // Use tabs for indentation

	return (0);
}
