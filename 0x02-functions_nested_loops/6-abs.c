#include "main.h"

/**
 * _abs - computes the absolute value
 * of an intiger
 *
 * @i: input number as intiger
 *
 * Return: absolute value
 */

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
