#include "main.h"
/**
* con - function that returns the natural square root of a number.
* @i: integer.
* @n: integer.
* Return: ..
*/

int con(long int n, long int i)
{
	if (i * i > n)
	{
	return (-1);
	}
		if (i * i == n)
		{
		return (i);
		}
return (con(n, i + 1));
}




/**
* _sqrt_recursion - function that returns the natural square root of a number.
* @n: integer.
* Return: ..
*/

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
	return (0);
	}
		if (n < 0)
		{
		return (-1);
		}
return (con(n, 1));
}
