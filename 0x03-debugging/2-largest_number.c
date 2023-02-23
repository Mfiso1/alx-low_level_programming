#include <stdio.h>

/**
 * main - debugging example
 * Return: 0
 */


int main(void)

{
    int a, b, c, largest;

    a=3;
    b=5;
    c=7;

    if (a > b && b > c)
    {
        largest = a;
    }
    else if (b > a && a > c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

  printf("%d", largest);
  return 0;
}
