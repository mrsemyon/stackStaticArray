#include "main.h"

int main() {
  Stack st;
  Data test[N] = {5, 17, -3, 0};

  assert(sizeof(test) == sizeof(st.a));

  init(&st);

  printf("empty: %s\n", is_empty(&st) ? "yes" : "no");
  printf("full: %s\n", is_full(&st) ? "yes" : "no");

  for (int i = 0; i < N; i++) {
    push(&st, test[i]);
    printf("PUSH: %d\n", test[i]);
    print(&st);
  }

  printf("empty: %s\n", is_empty(&st) ? "yes" : "no");
  printf("full: %s\n", is_full(&st) ? "yes" : "no");

  while (!is_empty(&st)) {
    printf("POP: %d\n", pop(&st));
    print(&st);
  }

  printf("empty: %s\n", is_empty(&st) ? "yes" : "no");
  printf("full: %s\n", is_full(&st) ? "yes" : "no");

  return 0;
}

int is_empty(Stack *st) { return st->n == 0; }

int is_full(Stack *st) { return st->n == sizeof(st->a) / sizeof(st->a[0]); }

void init(Stack *st) { st->n = 0; }

void push(Stack *st, Data d) { st->a[st->n++] = d; }

Data pop(Stack *st) { return st->a[--st->n]; }

void print(Stack *st) {
  printf("stack: ");
  for (uint i = 0; i < st->n; i++) {
    printf("%d ", st->a[i]);
  }
  printf("\n");
}
