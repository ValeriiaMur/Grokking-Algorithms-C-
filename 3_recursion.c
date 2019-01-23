#include <stdio.h>

void countdown(int i)
{
  printf("%d\n", i);
  if (i <= 0)
  {
     return ;
  }
  else
  {
    countdown(i - 1);
  }
}

int factorial(int n)
{
  if (n == 1)
    return 1;
  else
    return n * factorial(n - 1);
}

int main(void)
{
  int i = 9;
  printf("Countdown: \n");
  countdown(i);
  printf("Factorial is %d\n", factorial(5));
}
