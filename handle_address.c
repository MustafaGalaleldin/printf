#include "main.h"
/**
 * hxh_address - a function that prints the address
 * @type: a pointer to the format argument
 * @count: a counter the printed arguments
 * Return: count
*/
int hxh_address(va_list *type, int *count)
{
	char buffer[1024];
	int i;
	void *add = va_arg(*type, void *);


	sprintf(buffer, "%p", add);
	for (i = 0; buffer[i] != '\0'; i++)
	{
		_mchar(buffer[i]);
		(*count)++;
	}
	return (*count);
}
