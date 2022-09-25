#include<stdio.h>
int main()
{
    int i,arr[10],t;
    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<10;i++)
    {
        if(arr[0]>arr[i])
        {   t=arr[0];
            arr[0]=arr[i];
            arr[i]=t;
        }
    }

    for(i=1;i<10;i++)
    {
        if(arr[1]>arr[i])
            arr[1]=arr[i];
    }
   printf("%d",arr[1]);
    return 0;
}
