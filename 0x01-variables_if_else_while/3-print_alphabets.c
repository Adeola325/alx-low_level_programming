#include <stdio.h>
/**
 *main - Print alphabeth lowercase and uppercase
 *Return: Always 0 (Success)
 */
int main(void)
{
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
	int i;

	for (i = 0; i < 52; i++)
	{
		purchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
