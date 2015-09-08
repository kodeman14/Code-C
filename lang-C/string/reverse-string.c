#include <stdio.h>
#include <string.h>

//reverses a string

int main() {
  char arr[100];
  printf("enter string\n");
  gets(arr);
  strrev(arr);
  printf("reverse of string is %s\n", arr);
  return 0;
}
