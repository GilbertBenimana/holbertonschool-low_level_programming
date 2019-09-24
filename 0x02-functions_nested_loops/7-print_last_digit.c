#include "holberton.h"

/**
  * print_last_digit - Prints the last digit of a number
  * @n: The number to be treated
  *
  * Return: Value of the last digit of number
  */
int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		n = -n;
	}

	last = n % 10;
	_putchar(last + '0');

	return (last);
}
