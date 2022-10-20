#include "main.h"

/**
* _isupper - verifying uppercase numbers
* @c: is the int that will be used for the argument in the function
* Return: 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
