#include "main.h"
/**
 * examine_hxh_m_hexa - a function that examins the format
 * @d: the number
 * @ptr: address of char
 * Return: Nothing
*/
void examine_hxh_m_hexa(int d, char *ptr)
{
	switch (d)
			{
				case 10:
					*ptr = 'a';
					break;
				case 11:
					*ptr = 'b';
					break;
				case 12:
					*ptr = 'c';
					break;
				case 13:
					*ptr = 'd';
					break;
				case 14:
					*ptr = 'e';
					break;
				case 15:
					*ptr = 'f';
					break;
				default:
				break;
			}
}
/**
 * examine_hxh_M_hexa - a function that examins the format
 * @d: the number
 * @ptr: address of char
 * Return: Nothing
*/
void examine_hxh_M_hexa(int d, char *ptr)
{
	switch (d)
			{
				case 10:
					*ptr = 'A';
					break;
				case 11:
					*ptr = 'B';
					break;
				case 12:
					*ptr = 'C';
					break;
				case 13:
					*ptr = 'D';
					break;
				case 14:
					*ptr = 'E';
					break;
				case 15:
					*ptr = 'F';
					break;
				default:
					break;
			}
}
