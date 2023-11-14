#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	/*int len;
	int len2;*/
	long int l;
	long int l1;

	l = (long int) INT_MIN - 1024;
	l1 = (long int) INT_MAX + 1024;
	/*int x, x1;
	unsigned int ui;
	void *addr;*/
	/*_printf("%!\n");
	_printf("%K\n");
	_printf(NULL);
	_printf("you know %s nothing\n", ((char *)0));
	_printf("%S\n", "Best\nSchool");
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");*/
	/*ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;*/
	/*_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -76253455);
	printf("Negative:[%d]\n", -76253445);*/
	_printf("%d\n", 1024);
	_printf("%d\n", -1024);
	_printf("%d\n", INT_MAX);
	printf("%d\n", INT_MAX);
	_printf("%d\n", INT_MIN);
	printf("%d\n", INT_MIN);
	_printf("%d\n", 0);
	_printf("%d\n", l);
	printf("%ld\n", l);
	_printf("%d\n", l1);
	printf("%ld\n", l1);
	_printf("There is %d bytes in %d KB\n", 1024, 1);
	printf("\n");
	_printf("%i\n", 1024);
	_printf("%i\n", -1024);
	_printf("%i\n", INT_MAX);
	printf("%i\n", INT_MAX);
	_printf("%i\n", INT_MIN);
	printf("%i\n", INT_MIN);
	_printf("%i\n", 0);
	_printf("%i\n", l);
	printf("%li\n", l);
	_printf("%i\n", l1);
	printf("%li\n", l1);
	_printf("There is %i bytes in %i KB\n", 1024, 1);

	/*_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 72);
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	printf("Address:[%p]\n", addr);
	_printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("%b\n", 98);
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");
	x = _printf("legendes are %s terminated\n", NULL);
	_printf("length of our printf = %d\n", x);
	x1 = printf("legendes are (null) terminated\n");
	printf("length of the original printf = %d\n", x1);*/
	return (0);
}
