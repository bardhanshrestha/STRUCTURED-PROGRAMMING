#include <stdio.h>

int main() {
  int a = 12; // 00001100

  int result = a >> 2;
  printf("Result: %d\n", result); // 3 (12 / 2^2)
  return 0;
}
