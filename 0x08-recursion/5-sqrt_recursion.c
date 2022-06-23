#include "main.h"
#include <math.h>

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);


/**
 * find_sqrt - Finds the natural square root of a number
 * @num: Number whose root is to found
 * @root: The root to be tested
 *
 * Return: if the number suare root - the square root
 */

int find_sqrt(int num, int root)
{
if ((root * root) == num)
return (root);
if (root == num / 2)
return (-1);
return (find_sqrt(num, root + 1));
}
/**
 * _sqrt_recursion -  A function that require rot of a number
 *@n: Unknown root of number
 *
 * Return: The natural roots
 */

int _sqrt_recursion(int n)
{
int root = 0;
if (n < 0)
return (-1);
if (n == 1)
return (1);
return (find_sqrt(n, root));
}
