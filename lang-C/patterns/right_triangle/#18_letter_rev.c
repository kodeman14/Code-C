#include<stdio.h>
#include<conio.h>

void main() {
  clrscr();
  for (int i=0; i<5; i++) {
    for (int j=5; j>i; j--) {
      printf("%c", i+65);
    } printf("\n");
  }
  getch();
}

/*

AAAAA
BBBB
CCC
DD
E

*/
