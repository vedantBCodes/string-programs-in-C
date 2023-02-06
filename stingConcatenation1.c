#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20];
    printf("Enter the first string:");
    gets(str1);
    printf("Enter the second string:");
    gets(str2);
    strcat(str1,str2);
    puts(str1);

}
