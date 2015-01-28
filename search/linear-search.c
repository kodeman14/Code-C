#include <stdio.h>

// sequential search of finding a value in a list
// consists of checking every element until found
// run time = complexity = big O notation = O (n)

void main() {
  int arr[10];
  int i, num, keynum, found = 0;
  printf("enter value of num\n");
  scanf("%d", &num);
  printf("enter one element\n");
  for (i=0; i<num; i++) {
    scanf("%d", &arr[i]);
  }
  printf("enter element to be searched\n");
  scanf("%d", &keynum);
  for (i=0; i<num; i++) {
    if (keynum == arr[i]) {
      found = 1;
      break;
    }
  }
  if (found == 1) {
    printf("element present in array\n");
    printf("number located at position %d", i+1);
  } else {
    printf("element not present in array\n");
  }
  getch();
}
