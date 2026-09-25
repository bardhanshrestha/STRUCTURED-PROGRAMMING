#include <stdio.h>

void count() {
  static int myNum = 0; 
  myNum++;
  printf("num = %d\n", myNum);
}

int main() {
  count();
  count();
  count();
  return 0;
}
