#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - Prints the reverse of a string
 * @s: String address to be reversed
 *
 * Return: void
 */

void print_rev(char *s)
{
int i, len, pick;
len = strlen(s);

for (i = 0; i < (len / 2); i++)
{
pick = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = pick;

}

printf("%s\n", s);
return;
}
