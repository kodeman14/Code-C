#include<stdio.h>
#include<conio.h>

void main() {
  clrscr();
  for (char i='A'; i<='E'; i++) {
    for (int j='A'; j<=i; j++) {
      printf("%c", i);
    } printf("\n");
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
