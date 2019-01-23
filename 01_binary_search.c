#include <stdio.h>
#include <string.h>

 int binary_search(int list[], int item)
 {
	 int low = 0;
	 int mid;
	 int guess = 0;
	 int high = 8-1;
	 int found = 0;

	 while (low <= high)
	 {
		 mid = (low+high) /2;
		 guess = list[mid];
		 if (guess == item)
		 	return (mid);
		 if (guess > item)
		 	high = mid - 1;
		else
			low = mid +1;
	 }
	 return (0);
 }

 int main(void)
 {
	 int my_list[] = {1, 2, 3, 4, 5, 6, 17, 77};
	 printf("%d", binary_search(my_list, 18));
 }
