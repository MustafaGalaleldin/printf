#include "main.h"
/**
 * hxh_print_unsign - print insigned int
 * @n: unsigned intiger
 * @count: ptr
 * Return: noting
 */
int hxh_print_unsign(unsigned int n, int *count)
{
	if (n / 10 != 0)
	{
		hxh_print_unsign(n / 10, count);
	}
	_mchar((n % 10) + '0');
	(*count)++;
	return (*count);
}
/**
 * hxh_unsigned - print insigned int
 * @type: list ptr
 * @count: ptr
 * Return: noting
 */
int hxh_unsigned(va_list *type, int *count)
{
	unsigned int n;

	n = va_arg(*type, unsigned int);
	hxh_print_unsign(n, count);
	return (*count);
}
