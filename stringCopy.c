#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],strc[20];
    puts("Enter a string:");
    gets(str);
    strcpy(strc,str);
    printf("Entered string-str:%s",str);
    printf("\nCopied string-strc:%s",strc);
}
