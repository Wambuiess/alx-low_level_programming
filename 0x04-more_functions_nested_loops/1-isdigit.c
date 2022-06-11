#include  "main.h"
#include <stdio.h>

/**
 * _isdigit - funtion that checks for a digit 
 * @c: takes character/digit
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	return (1);
	return (0);
}