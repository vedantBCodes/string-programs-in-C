#include<string.h>
#include<stdio.h>
int main()  //This programs converts string into Uppercase
{
    char str[20];
    puts("Enter a string:");
    gets(str);
    strupr(str);
    printf("The uppercase string is:%s",str);
}
