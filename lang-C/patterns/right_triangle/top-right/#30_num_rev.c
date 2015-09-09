#include<stdio.h>
#include<conio.h>

void main() {
  int z=5, n=5; // (z -> max stars) + (n -> size)
  clrscr();
  for (int i=n; i>=1; i--) {
    for (int j=n-1; j>i; j--) {
      printf(" ");
    } for (int k=1; k<=z; k++) {
        printf("%d", i);
    } z--;
    printf("\n");
  }
  getch();
}

/*

55555
 4444
  333
   22
    1

*/
