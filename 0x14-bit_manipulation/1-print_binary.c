#include "main.h"

/**
 * print_binary - prints the binary representative of a number.
 * @n: number
 * Return: void or 0
 */
void print_binary(unsigned long int n)
{
	char b;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	print_binary(n >> 1);
	b = (n & 1) ? '1' : '0';
	_putchar(b);
}
