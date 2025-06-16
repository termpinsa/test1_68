#include<stdio.h>
void main()
{
    int y,count;
    count = 1;
    y = count++;
    printf("y = %d, count = %d", y, count);//1,2
    count = 1;
    y = ++count;
    printf("\ny = %d, count = %d", y, count);//2,2
}