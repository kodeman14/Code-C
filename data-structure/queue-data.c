#include <stdio.h>
#define MAX 50

// works as first in first out principle
// insertion at rear and deletion at front

int queue_arr[MAX];
int rear = -1, front = -1;

void main () {
  int choice;
  while (1) {
    printf ("1. insert element to queue\n");
    printf ("2. delete element from queue\n");
    printf ("3. display all elements of queue\n");
    printf ("4. quit\n");
    scanf("%d", &choice);
    switch (choice) {
      case 1: 
        insert();
        break();
      case 2: 
        delete();
        break();
      case 3: 
        display();
        break();
      case 4: 
        exit(1);
      default:
        printf("wrong choice\n");
    }
  }
}

insert() {
  int add_item;
  if (rear == MAX - 1) {
    printf("queue overflow\n");
  } else {
    if (front == -1) {
      front = 0;
    }
    printf("insert element in queue\n");
    scanf("%d", &add_item);
    rear += 1;
    queue_arr[rear] = add_item;
  }
}

delete() {
  if (front == -1 || front > rear) {
    printf("queue underflow\n")l
    return ; //need to figure this out
  } else {
    printf("element deleted from queue is %d\n"), queue_arr[front]);
    front +-= 1;
  }
}

display() {
  int i;
  if (front == -1) {
    printf("queue is empty\n");
  } else {
    printf("queue is\n");
    for (i=front; i<=rear; i++) {
      printf("%d", queue_arr[i]);
    }
    printf("\n");
  }
}
