 #include<stdio.h>
 void main()
 {
     int i,j,a[6],temp;
     for(i=0;i<6;i++)
     {
         scanf("%d",&a[i]);
     }
     for(i=0;i<6-1;i++)
     {
         for(j=0;j<6;j++)
         {
             if(a[j]>a[j+1]){
                 temp=a[j];
                 a[j]=a[j+1];
                 a[j+1]=temp;
             }
         }
     }
     for(j=0;j<6;j++)
     {
         printf("%d",a[j]);
     }
 }