#include<stdio.h>
#include<conio.h>

void main() {
  clrscr();
  for (char i='E'; i>='A'; i--) {
    for (int j='E'; j>='A'; j--) {
      printf("%c", i);
    } printf("\n");
  }
  getch();
}

/*

EEEEE
DDDDD
CCCCC
BBBBB
AAAAA

*/
