#include<stdio.h>

int main(){
    int a = 10;
    switch(a){
        case 10:
            printf("a is %d\n", a);
            break;
        case -10:
            printf("a is %d\n", a);
        default:
            printf("a actually is %d\n", a);
    }
    if(a == 0){
        printf("zero\n");
    }else if(a <= 0){
        printf("under zero\n");
    }else{
        printf("above zero\n");
    }
}