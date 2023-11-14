#include "main.h"
/**
 * hxh_m_hexa - print eq hexa
 * @type: list ptr
 * @count: ptr
 * Return: nothing
 */
int hxh_m_hexa(va_list *type, int *count)
{
	int size, d, i;
	unsigned int n, m;
	char *ap;
	char c;
	void (*examine_m)(int, char *);

	examine_m = examine_hxh_m_hexa;
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
			examine_m(d, &c);
			ap[i] = c;
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
	char r;
	void (*examine_M)(int, char *);

	examine_M = examine_hxh_M_hexa;
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
			examine_M(d, &r);
			ap[i] = r;
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
