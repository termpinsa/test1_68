//เขียนโปรแกรมรับข้อมูลจำนวนเต็ม 5 จำนวนจากผู้ใช้ และหาว่าค่าเฉลี่ยของข้อมูลที่รับเข้ามามีค่าเท่าใด
#include<stdio.h>
void main()
{
    int num1,num2,num3,num4,num5;
    float av=0;
    printf("Enter number : ");
    scanf("%d",&num1);
    printf("Enter number : ");
    scanf("%d",&num2);
    printf("Enter number : ");
    scanf("%d",&num3);
    printf("Enter number : ");
    scanf("%d",&num4);
    printf("Enter number : ");
    scanf("%d",&num5);
    av=(num1+num2+num3+num4+num5)/5;
    printf("Average : %.2f",av);
}