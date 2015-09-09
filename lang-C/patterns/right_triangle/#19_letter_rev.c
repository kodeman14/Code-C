#include<stdio.h>
#include<conio.h>

void main() {
  clrscr();
  for (int i=5; i>0; i--) {
    for (int j=0; j<i; j++) {
      printf("%c", j+65); // 65 -> ascii of 'A'
    } printf("\n");
  }
  getch();
}

/*

ABCDE
ABCD
ABC
AB
A

*/
