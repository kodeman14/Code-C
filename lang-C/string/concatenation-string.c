#include <stdio.h>
#include <string.h>

// joins two strings

int main() {
  char a[100], b[100];
  printf("enter first string\n");
  gets(a);
  printf("enter second string\n");
  gets(b);
  strcat(a,b);
  printf("string obtained is %s\n", a);
  return 0;
}
