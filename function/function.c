#include<stdio.h>
void printnamaste();
void printbonjur();
int main(){
    printf("enter f for french and i for indian");
    char ch;
    scanf("%c",&ch);
    if(ch=='f'){
        printbonjur();
    }
    else{
        printnamaste();
        return 0;
    }
}
void printnamaste(){ 
    printf("Namaste/n");
}
void printbonjur(){
    printf("Bonjur/n");
}
