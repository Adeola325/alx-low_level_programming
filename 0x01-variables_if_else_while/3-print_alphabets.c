#include <stdio.h>
/**
 *main - Entry point
 *Description: 'Print alphabeth lowercase and uppercase'
 *Return: Always 0
 */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		purchar(n);
		n++;
	}
	while (n <= 90)
	{
		purchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
