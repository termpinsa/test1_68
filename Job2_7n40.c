#include<stdio.h>
void main()
{
    float num;
    int a=0;
    printf("Enter number : ");
    scanf("%f",&num);
    a=num;
    printf("%.2f is between %d and %d",num,a,a+1);
}