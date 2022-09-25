#include<stdio.h>
int main()
{
    int arr[10],i,sumeven=0,sumodd=0;
    printf("Enter 10 elements of an array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    { if(arr[i]%2==0)
        sumeven+=arr[i];
      else
        sumodd+=arr[i];
    }
    printf("sum of even numbers %d\n",sumeven);
    printf("sum of odd numbers %d",sumodd);
    return 0;
}
