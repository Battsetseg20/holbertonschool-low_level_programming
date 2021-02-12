#include <stdio.h>
/**
 *main - prints lowercase alphabets in reverse
 *Return: 0 (success)
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter--);
	}
	putchar('\n');

	return (0);
}
