#include <stdio.h>

/**
 * main - fizzbizz
 *
 * Return: always 0
 */
int main(void)
{
int a;
for (a = 1; a <= 100; a++)
{
if ((a % 15) == 0)
{
printf("FizzBuzz");
}
else if ((a % 3) == 0)
{
printf("Fizz");
}
else if ((a % 5) == 0)
{
printf("Buzz");
}
else
printf("%d", a);
}
if (x != 100)
{
printf(" ");
}
printf("\n");
return (0);
}
