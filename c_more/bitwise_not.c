#include <stdio.h>

int main() {
  int a = 5; // 00000101

  int result = ~a;
  printf("Result: %d\n", result); // -6 on most systems
  return 0;
}
