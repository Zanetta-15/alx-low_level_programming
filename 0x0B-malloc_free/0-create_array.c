#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create an array of 'size' elements and initialize them with 'c'
 * @size: The size of the array
 * @c: The character to assign to each element
 *
 * Return: If 'size' is 0 or if memory allocation fails, returns NULL. Otherwise, returns the array.
 */
char *create_array(unsigned int size, char c)
{
    char *str;
    unsigned int i;

    if (size == 0)
        return (NULL);

    str = malloc(sizeof(char) * size);

    if (str == NULL)
        return (NULL);

    for (i = 0; i < size; i++)
        str[i] = c;

    return (str);
}
