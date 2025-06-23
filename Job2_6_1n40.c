//เขียนโปรแกรมรับข้อมูลจำ นวนเต็ม 5 จำนวนจากผู้ใช้ และหาว่าค่าเฉลี่ยของข้อมูลที่รับเข้ามามีค่าเท่าใด
#include<stdio.h>
void main()
{
    int num,sum,num3,num4,num5,count=5;
    float av=0;
for (int i = 1; i <= count; i++)
{
    printf("Enter number%d : ",i);
    scanf("%d",&num);
    sum=sum+num;
}
    av=sum/count;
    printf("Average : %.2f",av);
}