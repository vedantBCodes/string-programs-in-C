#include<stdio.h>
int main()  //This programs converts string into Uppercase
{
    char str[20];
    int i;
    puts("Enter a string:");
    gets(str);
    for(i=0;str[i]!=0;i++)
    {
        if((str[i]>=97)&&(str[i]<=120))
        {
            str[i]=str[i]-32;
        }
    }
    printf("The uppercase string is:%s",str);
}

