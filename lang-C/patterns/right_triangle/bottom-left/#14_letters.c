#include<stdio.h>
#include<conio.h>

void main() {
  clrscr();
  for (char i='A'; i<='E'; i++) {
    for (char j='A'; j<=i; j++) {
      printf("%c", j);
    } printf("\n");
  }
  getch();
}

/*

A
AB
ABC
ABCD
ABCDE

*/
