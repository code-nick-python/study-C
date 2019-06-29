#include <stdio.h>
 
int main()
{
 
   unsigned int a = 60;   /* 60 = 0011 1100 */
   unsigned int b = 13;   /* 13 = 0000 1101 */
   int c = 0;           
 
   c = a & b; 
   printf("60&13 = %d\n", c );
 
   c = a | b;
   printf("60|13 = %d\n", c );
 
   c = a ^ b;   
   printf("60^13 = %d\n", c );
 
   c = ~a;       
   printf("~60 = %d\n", c );
 
   c = a << 2;
   printf("60<<2 = %d\n", c );
 
   c = a >> 2; 
   printf("60>>2 = %d\n", c );

   c = (a == 60) ? 6: 10;
   printf("%d\n", c);
 
   c = (a < 60) ? 6: 10;
   printf("%d\n", c);
}