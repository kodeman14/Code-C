#include<stdio.h>
#include<conio.h>

void main() {
  clrscr();
  for (int i=0; i<5; i++) {
    for (int j=5; j>i; j--) {
      printf("%c", i+65); //65 -> ascii of 'A'
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
