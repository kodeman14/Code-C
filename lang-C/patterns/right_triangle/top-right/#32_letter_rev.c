#include<stdio.h>
#include<conio.h>

void main() {
  int z=5, n=5;
  clrscr();
  for (int i=n-1; i>=0; i--) {
    for (int j=n-1; j>i; j--) {
      printf(" ");
    } for (int k=0; k<z; k++) {
        printf("%c", i+65); // 65 -> ascii of 'A'
    } z--;
    printf("\n");
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
