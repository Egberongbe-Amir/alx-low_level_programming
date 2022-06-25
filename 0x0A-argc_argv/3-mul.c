#include <stdio.h>
#include <stdlib.h>

/**
 * main -  program that multiplies two numbers.
 * @argc: count the arguments
 * @argv: store array of argument
 *
 * Return: if doesnt recieve two argument return -1
 * else return -0
 */

int main(int argc, char *argv[])
{
int num1, num2, prod;

if (argc != 3)
{
printf("Error\n");
return (1);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
prod = num1 *num2;

printf("%d\n", prod);
return (0);
}
