#include "holberton.h"

int main(void)
{
	int s = 0;
	char h[] = "Holberton";
	while (h[s])
	{
		_putchar(h[s]);
		s++;
	}
	_putchar('\n');
	return (0);
}
