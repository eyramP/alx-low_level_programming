#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Find the last digit of random number 
 * 
 *Return: Always 0 (Success) 
 */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if(last > 5)
	{
		printf("Last digit of %d  is %d  and is greater than 5\n", n, last);
	}
	 else if(last == 0)
        {
                printf("The last digit of %d is %d and is 0\n", n, last);
        }
	else
	{
		printf("The last digigt of %d is %d and is less than 6\n", n, last);
	}
	return (0);
}
