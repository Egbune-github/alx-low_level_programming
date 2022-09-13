#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 * Return: always 0;
 */
void print_alphabet_x10(void)
{
	char e;
	char g;

	for (g = 0; g <= 9; g++)
	{
		for (e = 'a'; e <= 'z'; e++)
		{
			_putchar(e);
		}
		_putchar('\n');
	}
}
