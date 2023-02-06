#include<string.h>
#include<stdio.h>
int main()  //This programs converts string into lowercse
{
    char str[20];
    puts("Enter a string:");
    gets(str);
    strlwr(str);
    printf("The lowercase string is:%s",str);
}

