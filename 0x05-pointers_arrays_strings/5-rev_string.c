#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverse string
 * @s: string to be reserved
 *
 */

void rev_string(char *s)
{
int i;
int len;
int pick;
len = 0;
while (s[i++])
len++;
for (i = 0; i < len / 2; i++)
{
pick = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = pick;
}
}
