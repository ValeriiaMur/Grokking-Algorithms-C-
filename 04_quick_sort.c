#include <stdio.h>

int partition(int *arr, int start, int end)
{
  int pivot_point = arr[end];
  printf("pivot is %d\n", pivot_point);
  int temp = 0;
  int i = start-1;
  int j = start;

  while (j < end)
  {
    // If current element is smaller than or equal to pivot
    if (arr[j] <= pivot_point)
    {
      i++; //increment index of smaller element
      temp = arr[i]; // swap arr[i] and arr[j]
      arr[i] = arr[j];
      arr[j] = temp;
    }
    j++;
  }
  //swap arr[i + 1] and arr[end])
  temp = arr[i + 1];
  arr[i + 1] = arr[end];
  arr[end] = temp;
  return (i+1);
}

void quick_sort(int *arr, int start, int end)
{
  if (start < end)
  {
    int p = partition(arr, start, end);
    quick_sort(arr, start, p - 1);
    quick_sort(arr, p+1, end);
  }
}

int main(void)
{
  int i = 0;
  int my_arr[5] = {10, 9, 8, 1, 5};
  quick_sort(my_arr, 0, 4);
  while(i < 5)
  {
    printf("%d\n", my_arr[i]);
    i++;
  }
}
