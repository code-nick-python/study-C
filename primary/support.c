#include <stdio.h>
 
extern int x;
 
void write(void){
   printf("%d\n", x);
}