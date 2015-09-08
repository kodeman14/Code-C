#include <stdio.h>
#include <string.h>
#include <conio.h>

// words that read the same in both directions

int main() {
  char a[100], b[100];
  printf("enter string\n");
  gets(a);
  strcpy(b,a);
  strrev(b);
  if (strcmp(a,b) == 0) {
    printf("string is a palindrome\n");
  } else {
    printf("string isn't palindrome\n");
  }
  getch();
  return 0;
}
