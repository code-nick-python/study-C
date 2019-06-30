#include<stdio.h>

void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int a = 10;
    int *ip;
    ip = &a; 
    printf("%p\n", &a);
    printf("%p\n", *ip);
    printf("%p\n\n", ip);

    int b = 20;
    int *ip2;
    ip2 = &b;
    printf("%p, %d\n", ip2, *ip2);
    printf("%x\n", ip2>ip);
    ip2 ++;
    printf("%p, %d\n\n", ip2, *ip2);

    int c,d;
    c=1;
    d=2;
    swap(&c, &d);
    printf("%d,%d",c,d);
}