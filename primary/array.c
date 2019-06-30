#include<stdio.h>
#define len(x) (sizeof(x)/sizeof((x)[0]))
int main(){
    int age[] = {13,16,23};
    age[1] = 10;
    int res = len(age);
    printf("%d\n", res);
    for(int i = 0;i<res;i++){
        printf("%d : %d\n", i, age[i]);
    }
}