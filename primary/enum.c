#include<stdio.h>

enum Season{
    Spring = 1, Summer, Autumn, Winter
};

enum Weekend{
    Saturday, Sunday
};

int main(){
    enum Season season;
    int spr;
    spr=Spring;
    printf("%d\n", spr);

    enum Weekend weekend;
    for(int i=Saturday; i<=Sunday;i++){
        printf("%d\n", i);
    }
}