#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: prints  if a number is positive, negative or zero
 * Return: 0 (success)

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n>0)
{
printf("%d is a positive number\n",n);
}
else if (n==0)
{
printf("%d is zero\n",n);
}
else if (n<0)
{
printf("%d is a negative number\n",n);
return (0);
}
