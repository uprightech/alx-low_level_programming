#include <stdio.h>
#include <unistd.h>

#define STDOUT_FILE_DESCRIPTOR 2
#define MESSAGE_TO_PRINT "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"

/**
* main - Entry point
*
* Return: Always 1 (Failed)
*/
int main(void)
{
	write(STDOUT_FILE_DESCRIPTOR, MESSAGE_TO_PRINT, 59);
	return (1);
}
