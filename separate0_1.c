#include<stdio.h>
void main()
{
    int n,arr[10],i,count=0,count1=0;
    printf("enter the number of elements in an array");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    if(arr[i]==0)
    count++;
    else
    {
        count1++;
    }
    for(i=0;i<count;i++)
    arr[i]=0;
    for(i=0;i<count1;i++)
    arr[count+i]=1;
    for(i=0;i<n;i++)
    printf("%d\t",arr[i]);
}