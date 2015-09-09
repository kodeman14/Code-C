#include<stdio.h>
#include<conio.h>

void main() {
  clrscr();
  for (int i=4; i>=0; i--) {
    for (int j=0; j<=i; j++) {
      printf("%c", i+65); // 65 -> ascii of 'A'
    } printf("\n");
  }
  getch();
}

/*

EEEEE
DDDD
CCC
BB
A

*/
