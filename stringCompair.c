#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20];
    int value;
    puts("Enter a string:");
    gets(str1);
    puts("Enter another string:");
    gets(str2);
    value=strcmp(str1,str2);
    if(value==0)
        printf("Strings are same");
    else
       printf("Strings are not same");

}
