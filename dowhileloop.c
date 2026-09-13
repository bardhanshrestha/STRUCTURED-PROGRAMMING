#include <stdio.h>

int main() {
    int sum = 0;
    int i;

    i = 1; 
    do {
        sum = sum + i;
        i++; 
    } while (i <= 5); 

    printf("Sum is %d", sum);

    return 0;
}