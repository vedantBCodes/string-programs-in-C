#include<stdio.h>
int main()
{
    char name1[]="vedant",name4[30];
    printf("%s",name1);
    char name2[]={'v','e','d','a','n','t','\0'};
    printf("\n%s",name2);
    char name3[30];
    printf("\nEnter a name:");
    scanf("%s",name3); //This will accept only first word of input sentense
    printf("Entered name is:%s",name3);
}
