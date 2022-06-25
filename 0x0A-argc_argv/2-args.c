#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
 * @argc: count arguments presents
 * @argv: store array of argument
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
int arg;

for (arg = 0; arg < argc; arg++)
printf("%s\n", argv[arg]);

return (0);
}
