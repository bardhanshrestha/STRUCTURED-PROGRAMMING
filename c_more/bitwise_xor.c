#include <stdio.h>

int main() {
  int a = 6;   // 0110
  int b = 3;   // 0011

  int result = a ^ b;
  printf("Result: %d\n", result); // 5 (0101)
  return 0;
}
