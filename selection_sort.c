#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int find_smallest(int *arr, int len)
{
  int smallest = arr[0];
  int smallest_index = 0;
  int i = 0;

  while(i < len)
  {
    if (arr[i] < smallest)
    {
      smallest = arr[i];
      smallest_index = i;
    }
    i++;
  }
  return (smallest_index);
}

int *selection_sort(int *arr, int len)
{
  int *newAr = (int*)malloc(sizeof(int) * len);
  int smallest;
  int i = 0;

  while (i < len)
  {
    smallest = find_smallest(arr, len);
    printf("Smallest is %d\n", smallest);
    newAr[i] = arr[smallest];
    arr[smallest] = INT_MAX; //to reset a value
    i++;
  }
  return(newAr);
}

int main(void)
{
  int arr[4] = {2, 3, 6, 1};
  int len = 4;
  int *res = selection_sort(arr, len);
  for (int i = 0; i < len; i++)
  {
    printf("%d\n", res[i]);
  }
}
