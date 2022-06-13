#include "main.h"
#include <stdlib.h>
#include <string.h>
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
char pick;

len = strlen(s);
for (i = 0; i < (len - 1) / 2; i++)
{
pick = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = pick;
}
}
