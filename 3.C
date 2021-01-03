#include<stdio.h>
void main()
{
    int n,arr[10],i,j,temp,k;
    printf("enter the number of elements in an array");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("enter the value of k");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
printf("kth minimum element is");
printf("%d",arr[k-1]);
printf("\n");
printf("kth maximum element is");
printf("%d",arr[n-k]);
}