#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

/* more headers goes there */

/* betty style doc for function main goes there
 *
 *
 *
 *Return: Always 0 (Success)  
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* My code goes there */
	if (n > 0)
	prinf("%d is positive\n" n);
	else if (n == 0)
	printf("%d is zero\n" n);
	else 
	printf("%d is negative\n" n);
	return (0);
}
