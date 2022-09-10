#include <stdio.h>

/**
 *main - print if the number is postive, zero, or negative
 *
 *Description: using the main function
 *
 *this program prints "Programming is positive, zero, or negative
 *
 *Return: 0
 */

int main(void)

{
int num;
for (num = 48; num <= 57; num++)
{
putchar(num);
	if (num == 57)
	{
		break;
	}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
