#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints the character c to stdout
 * @c: is the character that needs to be printed
 *
 * Return: 1 on success.
 * On error, -1 is to be returned, and error is correctly set.
 */
int_putchar(char c)
{
	return (write(1,&c,1));
}
