#include "main.h"
/**
 * hxh_print_number - prints an integer
 * @n: input
 * @count: the number of printed arguments
 * Return: number
 */

int hxh_print_number(int n, int *count)
{
	unsigned int n1;

	n1 = n;
	if (n < 0)
	{
		_mchar('-');
		(*count)++;
		n1 = -n;
	}

	if (n1 / 10 != 0)
	{
		(*count)++;
		hxh_print_number(n1 / 10, count);
	}
	_mchar((n1 % 10) + '0');
	(*count)++;
	return (*count);
}
/**
 * hxh_int - a function that prints a character format
 * @type: a pointer to the format argument
 * @count: the number of printed arguments
 * Return: count
*/
int hxh_int(va_list *type, int *count)
{
	int n;

	n = va_arg(*type, int);
	hxh_print_number(n, count);
	return (*count);
}
