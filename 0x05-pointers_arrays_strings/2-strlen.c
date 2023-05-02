#include <stdio.h>

/**
 * _strlen - Returns the lenght osf a string.
 * @str: The string to get the lenght of
 * Return: Thelenght of @str.
 */
size_t _strlen(const char *str)

{
	size_t lenght = 0;

	while (*str++)
	lenght++;
	return (lenght++);
}
