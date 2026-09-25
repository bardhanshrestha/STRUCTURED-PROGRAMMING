#include <stdio.h>

int main() {
  int a = 3; // 00000011

  int result = a << 2;
  printf("Result: %d\n", result); // 12 (3 * 2^2)
  return 0;
}