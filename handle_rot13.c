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
	char *p = va_arg(*type, char *);

	for (i = 0; p[i]; i++)
	{
		if ((p[i] > 64 && p[i] < 91) || (p[i] > 96 && p[i] < 123))
		{
			for (j = 0; j < 52; j++)
			{
				if (p[i] == a[j])
				{
					_mchar(b[j]);
					(*count)++;
				}
			}
		}
		else
		{
			_mchar(p[i]);
			(*count)++;
		}
	}
	return (*count);
}
