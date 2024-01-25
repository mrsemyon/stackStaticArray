#include <assert.h>
#include <stdio.h>

#define N 4

typedef int Data;
typedef unsigned int uint;
typedef struct {
  Data a[N];
  uint n;
} Stack;

void print(Stack *st);
void init(Stack *st);
void push(Stack *st, Data d);
Data pop(Stack *st);
int is_empty(Stack *st);
int is_full(Stack *st);