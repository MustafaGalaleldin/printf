#include "main.h"
/**
 * hxh_binary - print in binary
 * @type: list ptr
 * @count: counter ptr
 * Return: Nothing
*/
int hxh_binary(va_list *type, int *count)
{
	unsigned int n = va_arg(*type, unsigned int);
	int i, size;
	unsigned int m = n;
	int *ap;

	size = 0;
	while (n / 2)
	{
		size++;
		n /= 2;
	}
	size++;
	ap = malloc(sizeof(int) * size);
	if (!ap)
		return (0);
	for (i = size - 1; i >= 0; i--, m /= 2)
		ap[i] = m % 2;
	for (i = 0; i < size; i++)
	{
		_mchar('0' + ap[i]);
		(*count)++;
	}
	free(ap);
	return (*count);
}
