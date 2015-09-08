// compares search value with middle element of array
// if match, then element is found and position returned
// otherwise, there are a couple conditions to follow
// if value < element, algo repeated on left sub-array
// if value > element, algo repeated on right sub-array
// run time = completely = big O notation = O (log n)

#include <stdio.h>

void main() {
  int arr[10];
  int i, j, num, temp, keynum;
  int low, mid, high;
  printf("enter value of num\n");
  scanf("%d", &num);
  printf("enter one element\n");
  for(i=0; i<num; i++) {
    scanf("%d", &arr[i]);
  }
  for (i=0; i<num; i++) {
    for (j=0; j<(num-i-1); j++) {
      if (arr[j] > arr[j+1]) {
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
  printf("sorted array is\n");
  for (i=0; i<num; i++) {
    printf("%d\n", arr[i]);
  }
  printf("enter element to be searched\n");
  scanf("%d", &keynum);
  low = 1; high = num;
  do {
    mid = (low + high) / 2;
    if (keynum < arr[mid]) {
      high = mid - 1;
    } else if (keynum > arr[mid]) {
      low = mid + 1;
    }
  } while (keynum != arr[mid] && low <= high);
  if (keynum == arr[mid]) {
    printf("search successful\n");
    printf("number located at postion %d", mid+1);
  } else {
    printf("search failed, number not found");
  }
  getch();
}
