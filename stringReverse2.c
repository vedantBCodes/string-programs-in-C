#include<stdio.h>
#include<string.h>
int main()
{
    char name[30],temp;
    int i;
    printf("Enter a name:");
    gets(name);
    int len=strlen(name);
    for(i=0;i<(len/2);i++)
    {
        temp=name[i];
        name[i]=name[len-1-i];
        name[len-1-i]=temp;
    }
    printf("reversed string is:%s",name);
}

