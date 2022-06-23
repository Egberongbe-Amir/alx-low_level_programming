#include "main.h"

/**
 * factorial - A function that returns the factorial of a given numuber
 * @n: factorial to be gotten
 * n is lower than o return -1
 *
 * Return: If n > 0 - the factorial of n
 * if n < 0 -1 to indicate error
 */

int factorial(int n)
{
if (n == 0)
return (1);
else if (n < 0)
return (-1);
else
return (n * factorial(n + 1));
}

