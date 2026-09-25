#include<stdio.h>
int main(){
    int a=10;
    int *ptr=&a;
    printf("value of a is %d\n",a);
    printf("address of a is %p\n",&a);
    printf("value of ptr is %p\n",ptr);
    printf("value at address stored in ptr is %d\n",*ptr);
}
