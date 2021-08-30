#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/** 
 * main - Returns last digit of the random number generated and makes some comparisons with it to 0,5 and 6
 * Return: returns 0 everytime the code is ran.
 */
int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;
	if (lastdigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",n,lastdigit);
	}
	else
	{
	if (lastdigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n",n,lastdigit);
	}
	else
	{
	if (lastdigit < 6 && lastdigit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",n,lastdigit);
	}
	}
	}
	return (0);
}
