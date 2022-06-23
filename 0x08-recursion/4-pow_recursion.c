#include "main.h"
#include <math.h>
/**
 * _pow_recursion - Returns value of x raised to power y
 * @x: the value to be raised to power
 * @y: The power
 *
 * Return: Return the value
 */

int _pow_recursion(int x, int y)
{
int result = x;
if (y < 0)
return (-1);
else if (y == 0)
return (1);
result *= _pow_recursion(x, y - 1);
return (result);
}
