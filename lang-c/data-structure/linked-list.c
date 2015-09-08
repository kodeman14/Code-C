#include <stdio.h>
#include <conio.h>
#include <alloc.h>

#define newnode (struct node*)
malloc (sizeof (struct node))

// ordered set of data elements
// each contains link to successor
// length of linked list is calculated

struct node {
  int data;
  struct node *next;
};

struct node *create_list();

void main() {
  struct node *f;
  int len;
  f = NULL;
  clrscr();
  f = create_list();
  len = find_len(f);
  printf("length = %d\n", len);
}

struct node *create_list() {
  struct node *f, *c, *p;
  int tdata;
  f = NULL;
  printf("enter data (use 0 to exit)\n");
  scanf("%d", &tdata);
  while (tdata != 0) {
    c = newnode;
    if (c == NULL) {
      printf("insufficient memory\n");
      exit(0);
    }
    c->data = tdata;
    c->next = NULL;
    if (f == NULL) {
      f = c;
    } else {
      p->next = c;
      p = c;
      printf("enter data (use 0 to exit)\n");
      scanf("%d", &tdata);
    }
  }
  return (f);
}

int find_len (struct node *f) {
  int len = 0;
  struct node *t;
  if (f == NULL) {
    return (0);
    t = f;
  }
  while (t != NULL) {
    len++;
    t = t->next;
  }
  return (len);
}
