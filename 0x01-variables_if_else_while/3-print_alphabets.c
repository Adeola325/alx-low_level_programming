#include <stdio.h>
/**
 *main - Entry point
 *Description: 'Prints the alphabeth lowercase'
 *Return: Always 0
 */
int main(void)
{
	int n = 97;
	int n = 65;

	while (n <= 122)
	{
		purchar(n);
		n++;
	}
	while (n <= 90)
	{
		purchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
