#include <stdio.h>
#include <conio.h>

void main() {
  int e=2, wave_height=4, wave_length=4;
  int n1=wave_height, n2=wave_height+1;
  // change value to increase/decrease height/length of wave
  int y, count, x=1; clrscr();
  for (int i=1; i<=wave_height; i++) {
    for (int j=wave_height; j<=wave_height+i; j++) {
      printf(" ");
    }
    for (count=1; count<=wave_length; count++) {
      for (y=(2*wave_height)-2; y>=x; y--) {
        printf(" ");
      }
      for (int k=1; k<=e; k++) {
        if (k==1) printf("%02d", n1);
        else if (k==e) printf("%02d", n2);
        else printf(" ");
      }
      n1=n1+(wave_height*2);
      n2=n2+(wave_height*2);
    }
    x+=2; e+=2;
    n1=wave_height-i;
    n2=wave_height+1+i;
    printf("\n");
  } getch();
}

/*

   04 05       12 13       20 21       28 29
  03   06     11   14     19   22     27   30
 02     07   10     15   18     23   26     31
01       08 09       16 17       24 25       32

*/
