#include "_putchar.h"

int main(void)
{
	char *c = "_putchar";

	while (*c)
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');

	return (0);

}

