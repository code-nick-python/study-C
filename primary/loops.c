#include<stdio.h>

int main(){
    int a = 10;
    while(a--){
        printf("%d", a);
    }
    printf("\n");
    for(a=10; a>0; a--){
        printf("%d", a);
    }
    printf("\n");
    do{
        printf("%d", a);
    }while(a<0);
    printf("\n");
    goto PRINT;
    printf("goto jump");
    PRINT:printf("goto get");
}