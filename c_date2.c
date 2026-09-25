#include <stdio.h>
#include <time.h>

int main() {
  time_t now = time(NULL);
  struct tm *t = localtime(&now);

  printf("Year: %d\n", t->tm_year + 1900);
  printf("Month: %d\n", t->tm_mon + 1);
  printf("Day: %d\n", t->tm_mday);
  printf("Hour: %d\n", t->tm_hour);
  printf("Minute: %d\n", t->tm_min);
  printf("Second: %d\n", t->tm_sec);
  return 0;
}
