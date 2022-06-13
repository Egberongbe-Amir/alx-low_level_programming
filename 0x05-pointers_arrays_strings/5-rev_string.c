#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* rev_string - Reverse string
* @s: string to be reserved
*/
void rev_string(char *s)
{
int i;
int len;
int pick;
len = strlen(s);
for (i = 0; i < (len - 1) / 2; i++)
{
pick = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = pick;
}
}
