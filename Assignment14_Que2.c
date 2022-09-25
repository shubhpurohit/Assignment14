#include<stdio.h>
int main()
{
    int arr[10],i,sum=0,avg=0;
    printf("Enter 10 elements of an array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        sum+=arr[i];
    }
    avg=sum/10;
    printf("avg is:-3%d",avg);
    return 0;
}
