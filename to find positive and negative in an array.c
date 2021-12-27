#include<stdio.h> 
void main()
{
    int i,a[10],pos_count=0,neg_count=0,zero_count=0;
for(i=0;i<10;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
    if(a[i]>0){
    pos_count++;
    printf("postive number=%d",pos_count);}
    else if(a[i]<0){
        neg_count++;
        printf("negative number=%d",neg_count);}
        else
        zero_count++;
        printf("zero=%d",zero_count);
    }
}
