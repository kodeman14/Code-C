#include<stdio.h>
#include<conio.h>

void main() {
  clrscr();
  for (int i=5; i>=1; i--) {
    for (int j=5; j>=1; j--) {
      printf("%d", i);
    } printf("\n");
  }
  getch();
}
