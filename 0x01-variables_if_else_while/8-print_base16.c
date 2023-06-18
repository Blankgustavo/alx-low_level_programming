#include <stdio.h>

/**
  * main - Prints a hexadecimal string
  *
  * Return: Always (Success)
  */
int main(void)
{
	char m;

	for (m = '0'; m <= '9'; m++)
	{
		putchar(m);
	}

	for (m = 'a'; m <= 'f'; m++)
	{
		putchar(m);
	}

	putchar('\n');

	return(0);
}
