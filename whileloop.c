#include <stdio.h>

int main() {
    int sum = 0;
    int i;

    i = 1; 

    while (i <= 5) {
        sum = sum + i;
        i++; 
    }

    printf("Sum is %d", sum);

    return 0;
}