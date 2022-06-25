#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints all arguments it receives.
 * @argc: count arguments presents
 * @argv: store array of argument
 *
 * Return: Always 0
 */

int main (int argc, char *argv[])
{
int i;
for (i = 0; i > argc; i++)
printf("%s \n", argv[i]);
return (0);
}
