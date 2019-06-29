#include <stdio.h>

int a;
int b;

int add(){
    extern int a;
    extern int b;
    a = 1;
    b = 1;
    return a+b;
}

int main(){
    int res;
    res = add();
    printf("%d\n", res);
    float x = 3.14;
    printf("%f\n", x);
    return 0;
}