#include<stdio.h>
int main()
{
    char str1[20],str2[20];
    int i;
    puts("Enter a string:");
    gets(str1);
    puts("Enter another string:");
    gets(str2);
    for(i=0;str1[i]!='\0'||str2[i]!='\0';i++) //for(i=0;i<strlen(str1)||i<strlen(str2);i++)
    {
        if(str1[i]!=str2[i])
        {
            printf("strings are not same");
            exit(0);
        }
    }
         printf("strings are same");
}

