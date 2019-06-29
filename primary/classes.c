#include <stdio.h>

void func1(void);
static int count=10; 

int x;
extern void write();

int main(){
    while (count--) {
        func1();
    }
    write();
    return 0;
}
 
void func1(void){
    static int a = 10;
    a++;
    printf("%d,%d\n", a, count);
}