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

int sum_elem(int *arr, int len)
{
  int sum = 0;
  if (len <= 0)
  {
    return 0;
  }
  else
  {
    return(sum_elem(arr, len - 1) + arr[len-1]);
  }
}

int biggest(int *arr, int len)
{
  int big = 0;
  int i =0;

  while(i < len)
  {
    if (arr[i] > big)
      big = arr[i];
    i++;
  }
  return (big);
}

int main(void)
{
  int arr[4] = {3, 5, 1, 1};
  int i = 9;
  printf("Countdown: \n");
  countdown(i);
  printf("Factorial is %d\n", factorial(5));
  printf("Recursive sum is %d\n", sum_elem(arr, 4));
  printf("The biggest num is %d\n", biggest(arr, 4));
}
