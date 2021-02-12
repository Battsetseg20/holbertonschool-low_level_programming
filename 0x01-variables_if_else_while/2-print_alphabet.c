#include <stdio.h>
/**
 *main - calls for putchar to print alphabets in lowercase
 *Return: 0 (success)
 */
int main(void)
{
	int letter;

	for (letter = 97; letter <= 122; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
