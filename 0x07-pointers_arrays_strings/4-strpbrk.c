#include "main.h"
/**
 * _strpbrk - the entry point
 * @s: input
 * @accept: input
 * return always 0 (success)
 */
char *_strpbrk(char *accept)
{
	int k;
	while (*s)
	{
		for (k=0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
