#include<stdio.h>
void main()
{
    int i,sum=0,a[5],avg;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
        avg=sum/5;
        printf("sum=\n%dand avg=\n%d",sum,avg);
}}