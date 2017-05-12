#include <stdlib.h>

static int board[10000];

extern int print(int);

int main() {
  board[0] = 1;
  return 0;
}

int myFunction(char *arg) {
  ++board[0];

  print(100);
  print(board[0]);

  int len = 0;
  while (arg[len]) {
    ++len;
  }

  return len;
}
