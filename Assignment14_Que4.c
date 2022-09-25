#include<stdio.h>
int main()
{
    int i=0,arr[10];
    while(i<10)
    {
        scanf("%d",&arr[i]);
        i++;
    }
    for(i=0;i<10;i++)
    {
        if(arr[0]<arr[i])
        {
            arr[0]=arr[i];
        }
    }
    printf("Greatest Value in array is %d",arr[0]);
    return 0;
}
