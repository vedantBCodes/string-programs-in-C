#include<stdio.h>
#include<string.h>
int main()
{
    char name[30];
    printf("Enter a name:");
    gets(name);
    strrev(name);
    printf("reversed string is:%s",name);
}
