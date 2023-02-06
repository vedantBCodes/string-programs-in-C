#include<stdio.h>
int main()
{
    char str1[20],str2[20];
    int i,flag=0;
    puts("Enter a string:");
    gets(str1);
    puts("Enter another string:");
    gets(str2);
    for(i=0;str1[i]!='\0'||str2[i]!='\0';i++)
    {
        if(str1[i]!=str2[i])
        {
           flag=1;
           break;
        }
    }
    if(flag==0)
    {
        printf("strings are same");
    }
    else
     {
         printf("strings are not same");
     }
}


