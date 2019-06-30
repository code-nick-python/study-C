#include <stdio.h>
#include <string.h>
 
int main (){
    char str1[12] = "Hello ";
    char str2[12] = "World!";
    char str3[12];
    int  len, cmp;

    strcpy(str3, str1);
    printf("%s\n", str3);

    strcat(str1, str2);
    printf("%s\n", str1);

    len = strlen(str1);
    printf("%d\n", len);

    cmp = strcmp(str1, str2);
    printf("%d\n", cmp);

    return 0;
}