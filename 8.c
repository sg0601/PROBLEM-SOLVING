#include<stdio.h>
void main()
{
    int n,arr[10],i,j,sum=0,currsum,temp,temp1;
    printf("enter tehe number of elements");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    i=0;
    currsum=arr[i];
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=i+1;j<n;j++)
        {
            sum=sum+arr[j];
            if(sum>currsum)
            currsum=sum;
        }
    }
    printf("%d\t",currsum);
}
    