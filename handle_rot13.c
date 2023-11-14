#include "main.h"

/**
 * hxh_rot13 - prints the rot13'ed string
 *
 * @type: list ptr
 * @count: ptr
 *
 * Return: count
 */
int hxh_rot13(va_list *type, int *count)
{
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghigklm";
	int i, j;
	char *ptr = va_arg(*type, char *);

	for (i = 0; ptr[i]; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (ptr[i] == a[j])
			{
				_mchar(b[j]);
				(*count)++;
			}
		}
	}
	return (*count);
}
