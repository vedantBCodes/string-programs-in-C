#include<stdio.h>
int main()
{
    char name[30];
    int i=0,cnt=0;
    printf("Enter a string:");
    gets(name);
    while(name[i]!='\0')
    {
        cnt++;
        i++;
    }
    printf("String length:%d",cnt);
}

