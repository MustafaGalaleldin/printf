#include "main.h"
/**
 * hex - print eq hexa
 * @m: number
 * @count: ptr
 * Return: nothing
 */
int hex(int m, int *count)
{
	int size = 2, d, i;
	char *ap = malloc(size);

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
				break; }
			}
		else
			ap[i] = d + '0'; }
		for (i = 0; i < size; i++)
		{
			_mchar(ap[i]);
			(*count)++; }
		free(ap);
		return (*count); }
/**
 * hxh_Str - a function that prints a character format
 * @ptr: a pointer to the format argument
 * @count: the number of printed arguments
 * Return: Nothing
*/
int hxh_Str(va_list *ptr, int *count)
{
	char *x = va_arg(*ptr, char *);
	int j;

	if (!x)
	{
		x = "(null)";
	}

	for (j = 0; x[j]; j++)
	{
		if (x[j] >= 32 && x[j] < 127)
		{
			_mchar(x[j]);
			(*count)++;
		}
		else
		{
			_mchar('\\');
			_mchar('x');
			(*count) += 2;
			hex(x[j], count);
		}
	}
	return (*count);
}
