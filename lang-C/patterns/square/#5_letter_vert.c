#include<stdio.h>
#include<conio.h>

void main() {
  clrscr();
  for (char i='A'; i<='E'; i++) {
    for (char j='A'; j<='E'; j++) {
      printf("%c", j);
    } printf("\n");
  }
  getch();
}

/*

ABCDE
ABCDE
ABCDE
ABCDE
ABCDE

*/
