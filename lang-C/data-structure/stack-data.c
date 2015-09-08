#include <conio.h>
#include <stdio.h>
#define max 50

// operations are addition and removal of entity
// relation is such that stack is last in first out

void push();
void pop();
void display();
int menu();
int stack[max], top = 0;

void main() {
  int ch;
  clrscr();
  do {
    ch = menu();
    switch (ch) {
      case 1:
        push();
        break;
      case 2:
        pop();
        break;
      case 3:
        display();
        break;
      case 4:
        exit();
      default:
        printf("enter valid choice\n");
    }
  } while (1);
}

int menu() {
  int ch;
  printf("stack\n");
  printf("1. push\n2. pop\n3. display\n4. exit\n");
  printf("enter choice\n");
  scanf("%d", &ch);
  return ch;
}

void push() {
  if (top == max) {
    printf("overflow\n");
  } else {
    int element;
    printf("enter element\n");
    scanf("%d", &element);
    printf("element(%d) has been pushed at %d\n", element, top);
    stack[top++] = element;
  }
}

void pop() {
  if (top == -1) {
    printf("underflow\n");
  } else {
    top--;
    printf("element has been popped out\n");
  }
}

void display() {
  if (top == 0) {
    printf("stack is empty\n");
  } else {
    int i;
    for (i=0; i<max; i++) {
      printf("%d", stack[i]);
    }
  }
}
