#include<stdio.h>
void main()
{
    int n,arr[10],i,j,count=0,arr1[10]={0};
    printf("enter the number of elements in an array");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                count++;
            }
            arr1[i]=count;

                  
        }
    }

                       for(i=0;i<n;i++)
                       printf("%d\t",arr1[i]);
}