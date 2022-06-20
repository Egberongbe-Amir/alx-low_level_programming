#include <stdio.h>
#include <string.h>

/**
 * _memset - function copies n bytes from memory area src to memory area dest
 * @s: memory area
 * @b: constant byte
 * @n: first n byte to be filled
 *
 * Return: Always Zero
 */

char *_memset(char *s, char b, unsigned int n)
{
memset(s, b, n);

printf("%s", s);
return (0);
}

