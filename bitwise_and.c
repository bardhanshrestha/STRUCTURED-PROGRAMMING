#include <stdio.h>

int main() {
  int a = 6; //0110
  int b = 3; //0011 

  int result = a & b;
  printf("Result: %d\n", result); //2(0010)
  return 0;
}