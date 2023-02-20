#include <stdlib.h>
#include <time.h>
/**
 * main entry point 
 * description the code determines the last digit entered
 * return 0 if successful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 5)
	{
		printf("The last digit of %d is greater than 5\n",%d)
	}
	else if (n == 0)
	{
		printf("The last digit of %d is 0\n",%d)
	}
	else if (n == 6 && n=!0)
	{
		printf("The last digit of %d is 6 and not 0\n",%d)
	}
	return (0);
}
