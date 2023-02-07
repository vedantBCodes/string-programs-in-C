#include<stdio.h>
#include<string.h>
int main()
{
    char str1[40],str2[20];
    printf("Enter the first string:");
    gets(str1);
    printf("Enter the second string:");
    gets(str2);
    int len1=strlen(str1);
    int len2=strlen(str2);
    int len3=len1+len2;
    for(int i=0;i<len3;i++)
    {
        str1[len1]=str2[i];
        len1++;
    }
    str1[len1]='\0';
    puts(str1);
}

