#include <stdio.h>

/**
 *main - prints the name of the file it was compiled from
 *
 *Return: 0
 */

int main(void)
{
/* __FILE__ expands to the name of the current input file */
	printf("%s\n", __FILE__);
	return (0);
}
