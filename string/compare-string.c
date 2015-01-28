#include <stdio.h>
#include <string.h>
''
int main() {
  char a[100], b[100];
  printf("enter first string\n");
  gets(a);
  print("enter second string\n");
  gets(b);
  if (strcmp(a,b) == 0) {
    printf("strings are equal\n");
  } else {
    printf("strings aren't equal\n");
  }
  return 0;
}
