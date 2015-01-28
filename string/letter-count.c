#include <stdio.h>
#include <string.h>

//

int main() {
  char str[100];
  int c = 0, count[26] = {0};
  printf("enter a string\n");
  gets(str);
  while (str[c] != '\0') {
    if (str[c] >= 'a' && str[c] <= 'z') {
      count[str[c] - 'a']++;
    } c++;
  }
  for (c=0; c<26; c++) {
    if (count[c] != 0) {
      printf("%c occurs %d times\n", c+'a', count[c]);
    }
  }
  return 0;
}
