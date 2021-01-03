0#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,arr[10],i,j,temp,sum;
    printf("enter the number of digits in a number");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
        
        
        if(sum%3==1)
        {
            for(i=0;i<n;i++)
            {
                if(arr[i]%3==0)
                {
                    printf("%d",arr[i]);
                    
                }
            }
        }
        if(sum%3==0)
        {
                      printf("number is completly divisble by 3");
                      exit(0);
                      
        }
        if(sum%3==2)
        {
            for(i=0;i<n;i++)
            {
                if(arr[i]%3==0)
                {
                    printf("%d",arr[i]);
                    
                }
            }
        }
          if(sum%3==0)
        {
                      printf("number is completly divisble by 3");
                          
                      
        }

} 

    




