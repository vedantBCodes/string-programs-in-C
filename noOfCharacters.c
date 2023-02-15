#include<stdio.h>
#include<string.h>
int main()
{
    char name[50];
    int i,cnt=0;
    printf("Enter a string:");
    gets(name);
    int len=strlen(name);
    for(i=0;i<len;i++)
    {
        if(name[i]!=' ')
        {
            cnt++;
        }
    }
    printf("Number of characters in the entered string is:%d",cnt);
}
