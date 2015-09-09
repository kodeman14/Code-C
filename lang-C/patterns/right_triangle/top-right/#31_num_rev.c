#include<stdio.h>
#include<conio.h>

void main() {
  int z=5, n=5;
  clrscr();
  for (int i=1; i<=n; i++) {
    for (int j=1; j<=i; j++) {
      printf(" ");
    } for (int k=1; k<=z; k++) {
        printf("%d", k);
    } z--;
    printf("\n");
  }
  getch();
}

/*

12345
 1234
  123
   12
    1

*/
