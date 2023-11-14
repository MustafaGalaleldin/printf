#include "main.h"
/**
 * hxh_m_hexa - print eq hexa
 * @type: list of arguments
 * @count: ptr
 * Return: nothing
 */
int hxh_m_hexa(va_list *type, int *count)
{
	int size, d, i;
	unsigned int n, m;
	char *ap;

	size = 0;
	n = va_arg(*type, unsigned int);
	m = n;
	while (n / 16)
	{
		size++;
		n /= 16;
	}
	size++;
	ap = malloc(size);
	if (!ap)
		return (0);
	for (i = size - 1; i >= 0; i--, m /= 16)
	{
		d = m % 16;
		if (d > 9)
		{
			switch (d)
			{
				case 10:
					ap[i] = 'a';
					break;
				case 11:
					ap[i] = 'b';
					break;
				case 12:
					ap[i] = 'c';
					break;
				case 13:
					ap[i] = 'd';
					break;
				case 14:
					ap[i] = 'e';
					break;
				case 15:
					ap[i] = 'f';
					break;
				default:
				break;
			}
		}
		else
			ap[i] = d + '0';
		}
	for (i = 0; i < size; i++)
	{
		_mchar(ap[i]);
		(*count)++;
	}
	return (*count);
	free(ap);
}
#include "main.h"
/**
 * hxh_M_hexa - print eq hexa
 * @type: list ptr
 * @count: ptr
 * Return: nothing
 */
int hxh_M_hexa(va_list *type, int *count)
{
	int size, d, i;
	unsigned int n, m;
	char *ap;

	size = 0;
	n = va_arg(*type, unsigned int);
	m = n;
	while (n / 16)
	{
		size++;
		n /= 16;
	}
	size++;
	ap = malloc(size);
	if (!ap)
		return (0);
	for (i = size - 1; i >= 0; i--, m /= 16)
	{
		d = m % 16;
		if (d > 9)
		{
			switch (d)
			{
				case 10:
					ap[i] = 'A';
					break;
				case 11:
					ap[i] = 'B';
					break;
				case 12:
					ap[i] = 'C';
					break;
				case 13:
					ap[i] = 'D';
					break;
				case 14:
					ap[i] = 'E';
					break;
				case 15:
					ap[i] = 'F';
					break;
				default:
					break;
			}
		}
		else
			ap[i] = d + '0';
	}
	for (i = 0; i < size; i++)
	{
		_mchar(ap[i]);
		(*count)++;
	}
	free(ap);
	return (*count);
}
