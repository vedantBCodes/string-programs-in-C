#include<stdio.h>
#include<string.h>
int main()
{
    char name[30];
    printf("Enter a string:");
    gets(name);
    int x=strlen(name);
    printf("String length:%d",x);
}
