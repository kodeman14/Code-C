#include<stdio.h>
#include<conio.h>

void main() {
  int z=5, n=5; // (z -> max stars) + (n -> size)
  clrscr();
  for (int i=1; i<=n; i++) {
    for (int j=1; j<=i; j++) {
      printf(" ");
    } for (int k=0; k<z; k++) {
        printf("%c", k+65); // 65 -> ascii of 'A'
    } z--;  
    printf("\n");
  }
  getch();
}

/*

ABCDE
 ABCD
  ABC
   AB
    A

*/
