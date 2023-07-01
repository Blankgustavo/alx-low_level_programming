#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int i;

	srand(time(0));
	i = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
