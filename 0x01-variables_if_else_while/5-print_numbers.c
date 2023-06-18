#include <stdio.h>

/**
  * main - Prints the numbers since 0 to 9
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

	putchar('\n');

	return(0);
}
