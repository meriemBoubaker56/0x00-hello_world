#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - Entry point
*Return: Always 0 (Success)
*/


int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int mod = abs(n%10);
if (mod > 5)
{
printf("Last digit of %d is %d and is greater than 5", n, mod);
}
else if (n == 0)
{
printf("Last digit of%d is %d and is 0", n, mod);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0", n, mod);
}
return (0);
}
