
#include<stdio.h>
void main()
{
    int n,arr[10],count=0,steps,i,temp;
    printf("enter tehe number of elements");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    i=0,count=0;
    steps=arr[0];
    while(steps<n)
    {
               if(arr[steps]>steps)
            {
                
            
        steps=arr[steps];
    
        count++;
    }}
    printf("%d",count);
}