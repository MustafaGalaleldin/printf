#include "main.h"
/**
 * hxh_rev - print in reverse
 *
 * @type: list ptr
 * @count: ptr
 *
 * Return: count
 */
int hxh_rev(va_list *type, int *count)
{
	char *p = va_arg(*type, char *);
	int x;

	for (x = 0; p[x]; x++)
		;
	x--;
	for (; x >= 0; x--)
	{
		_mchar(p[x]);
		(*count)++;
	}
	return (*count);
}
