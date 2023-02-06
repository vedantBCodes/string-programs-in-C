#include<stdio.h>
int main()  //This programs converts string into Lowercase
{
    char str[20];
    int i;
    puts("Enter a string:");
    gets(str);
    for(i=0;str[i]!=0;i++)
    {
        if((str[i]>=65)&&(str[i]<=90))
        {
            str[i]=str[i]+32;
        }
    }
    printf("The lowercase string is:%s",str);
}



