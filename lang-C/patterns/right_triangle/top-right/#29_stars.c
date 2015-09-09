#include<stdio.h>
#include<conio.h>

void main() {
  int z=5, n=5; // (z -> max stars) + (n -> size)
  clrscr();
  for (int i=1; i<=n; i++) {
    for (int j=1; j<i; j++) {
      printf(" ");
    } for (int k=1; k<=z; k++) {
        printf("*");
    } z--;  
    printf("\n");
  }
  getch();
}

/*

*****
 ****
  ***
   **
    *

*/
