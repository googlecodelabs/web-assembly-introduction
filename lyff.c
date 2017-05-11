#include <stdlib.h>

static int board[10000];

int main() {
  board[0] = 1;
  return 0;
}

int myFunction(int argc, char ** argv) {
  ++board[0];
  return board[0];
}
