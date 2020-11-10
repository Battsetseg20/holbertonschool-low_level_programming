#include <unistd.h>

/**
 * main - writes n of characters to standard out followed by newline
 *
 * Return: 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

/* fd: file descriptor of file into which data is written*/
/*2: stderr */
/* buf : data to be written */
/* n : nbytes of data (length)*/
