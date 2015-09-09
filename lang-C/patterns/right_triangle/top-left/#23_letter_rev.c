#include<stdio.h>
#include<conio.h>

void main() {
  clrscr();
  for (int i=0; i<5; i++) {
    for (int j=4; j>=i; j--) {
      printf("%c", j+65); // 65 -> ascii of 'A'
    } printf("\n");
  }
  getch();
}

/*

EDCBA
EDCB
EDC
ED
E

*/
