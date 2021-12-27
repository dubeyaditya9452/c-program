#include<stdio.h>
void main()
{
    int sum=0,p=1,i,a[10];
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0){
        sum=sum+a[i];
        printf("sum=%d",sum);}
        else{
        p=p*a[i];
        printf("product=%d",p);}
    }
}