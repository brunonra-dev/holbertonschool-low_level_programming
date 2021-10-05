#include "main.h"
/**
 *jack_bauer - function that print 24 hours
 *
 *Return: void
 */
void jack_bauer(void)
{
	int hh, h, mm, m;

	for (hh = 0; hh < 3; hh++)
	{
		for (h = 0; h < 10; h++)
		{
			if (hh == 2 && h == 4)
			{
				break;
			}
			for (mm = 0; mm < 6; mm++)
			{
				for (m = 0; m < 10; m++)
				{
					_putchar(hh + '0');
					_putchar(h + '0');
					_putchar(':');
					_putchar(mm + '0');
					_putchar(m + '0');
					_putchar('\n');
				}
			}

		}
	}
}
