#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,arr[10],left,right,x,sum=0,i;
    printf("enter the number of elements in an array");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("enter the desired sum");
    scanf("%d",&x);
    left=0,right=0,sum=0;;
    while(sum!=x)
    {
        sum=0;
         for(i=left;i<=right;i++)          
        sum=sum+arr[i];
        if(sum==x)
        {
            printf("sumarry with given sum %d\tis",x);
            for(i=left;i<=right;i++)
            {

            
            printf("%d\t",arr[i]);
                
            }
        }
        if(sum<x)
        right++;
        else
        {
            left++;
        }
        
    }
}
                   

    
