#include<stdio.h>
void main()
{
    char name[10];
    int heigh;
    printf("Enter name : ");
    scanf("%s",name);
    printf("Enter height (cm.) : ");
    scanf("%d",&heigh); 
    printf("Output : \n\tName \t%s\n\tHeight \t%d cm",name,heigh);

}