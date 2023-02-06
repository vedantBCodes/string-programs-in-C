#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],strc[20];
    puts("Enter a string:");
    gets(str);
    int len=strlen(str);
    for(int i=0;str[i]!='\0';i++)
    {
        strc[i]=str[i];
    }
   // strc[len]='\0';  //  strc[i]='\0' think about it
    printf("Entered string-str:%s",str);
    printf("\nCopied string-strc:%s",strc);
}

