#include <stdio.h>

/**
 * main - prints number of arguments in argv array
 *@argc: number of arguments
* @argv: arguments suplied to program
*
*Return: 0
*/

int main(int argc, char *argv[] __attribute__((__unused__)))
{
	printf("%d\n", argc - 1);
	return (0);
}
