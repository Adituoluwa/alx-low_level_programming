#include "main.h"
/**
 * _memset - fills a block of memory wit a particular value
 * @s: the starting address of memory that needs to be filled
 * @b: the value desired
 * @n: the number of bytes that needs to be changed
 *
 * return: changed array containing new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
