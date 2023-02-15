#include<stdio.h>
#include<string.h>
int main()
{
    char name[30],name2[30];
    int i;
    printf("Enter a name to check whether it is pallidrome or not:");
    gets(name);
    int len=strlen(name);
    for(i=0;i<len;i++)
    {
        name2[i]=name[i];
    }
    name2[i]='\0';
    for(i=0;i<len/2;i++)
    {
        char temp=name[i];
        name[i]=name[len-1-i];
        name[len-1-i]=temp;
    }
    int cnt=0;
    for(i=0;i<len;i++)
    {
        if(name2[i]==name[i])
        {
            cnt++;
        }
    }
    if(cnt==len)
    {
        printf("%s is a pallindrome number",name2);
    }
    else
    {
          printf("%s is not a pallindrome number",name2);
    }
}
