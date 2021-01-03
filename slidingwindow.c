#include<stdio.h>
void main()
{
    int arr[10],i,k,n,j,l,max[10]={0};
    printf("enter the number of elements in an array");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("enter the value of k");
    scanf("%d",&k);
    for(i=0;i<n-k+1;i++)
    {
        for(j=i+1;j<k;j++)
        {
                  for(l=j+1;l<k;l++)
                  {
                                if(arr[i]>arr[j]&&arr[i]>arr[l])
                                max[i]=arr[i];
                                 if (arr[j]>arr[i]&&arr[j]>arr[k])
                                max[i]=arr[j];
                                if(arr[k]>arr[i]&&arr[k]>arr[j])
                                {
                                    max[i]=arr[k];
                                }
                                i=j;
                                j=l;
                                
                  }
        }
    }
           
                for(i=0;i<n-k+1;i++)
                printf("%d\t",max[i]);
}