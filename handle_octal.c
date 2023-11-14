#include "main.h"
/**
 * hxh_octal - print in octal
 * @type: list ptr
 * @count: counter ptr
 * Return: nothing
 */
int hxh_octal(va_list *type, int *count)
{
	unsigned int n;
	int i, size;
	unsigned int m;
	int *ap;

	size = 0;
	n = va_arg(*type, unsigned int);
	m = n;
	while (n / 8)
	{
		size++;
		n /= 8;
	}
	size++;
	ap = malloc(sizeof(int) * size);
	if (!ap)
		return (0);
	for (i = size - 1; i >= 0; i--, m /= 8)
		ap[i] = m % 8;
	for (i = 0; i < size; i++)
	{
		_mchar('0' + ap[i]);
		(*count)++;
	}
	free(ap);
	return (*count);
}
