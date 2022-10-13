#include <stdio.h>
#include <unistd.h>

#define STDOUT_FILE_DESCRIPTOR 2
/**
* main - Entry point
*
* Return: Always 1 (Failed)
*/
int main(void)
{
	write(STDOUT_FILE_DESCRIPTOR, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
