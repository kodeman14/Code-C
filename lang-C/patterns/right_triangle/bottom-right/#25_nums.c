#include<stdio.h>
#include<conio.h>

void main() {
  int z=1, n=5;
  clrscr();
  for (int i=1; i<=n; i++) {
    for (int j=n-1; j>i; j--) {
      printf(" ");
    } for (int k=1; k<=z; k++) {
        printf("%d", i);
    } z++;  
    printf("\n");
  }
  getch();
}

/*

    1
   22
  333
 4444
55555

*/
