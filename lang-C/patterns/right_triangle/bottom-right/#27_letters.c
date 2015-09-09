#include<stdio.h>
#include<conio.h>

void main() {
  int z=1, n=5;
  clrscr();
  for (int i=0; i<n; i++) {
    for (int j=n-1; j>i; j--) {
      printf(" ");
    } for (int k=1; k<=z; k++) {
        printf("%c", i+65); // 65 -> ascii of 'A'
    } z++;  
    printf("\n");
  }
  getch();
}

/*
    A
   BB
  CCC
 DDDD
EEEEE

*/
