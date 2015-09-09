#include <stdio.h>
#include <conio.h>

void main() {
  int min_stars=1, p_height=5;
  int p_space=p_height-1;
  clrscr();
  
  /*
  change val of min_stars to set min # of *'s in pyramid
  take odd # for odd # of *'s in each row, 1-3-5 etc
  take even # for even # of *'s in each row, 2-4-6 etc
  */
  
  for (int i=0; i<p_height; i++) {
    for (int j=p_space; j>i; j--) {
      printf(" ");
    } for (int k=0; k<min_stars; k++) {
        printf("*");
    } min_stars+=2;
    printf("\n");
  }
  getch();
}

/*

    *
   ***
  *****
 *******
*********

*/
