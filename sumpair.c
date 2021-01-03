#include<stdio.h>
void main()
{
    int arr[10],i,j,num,n;
    printf("enter the no of elements of array");
      scanf("%d",&n);
      printf("enter the elements of array");
      for(i=0;i<n;i++)
      {
      scanf("%d",&arr[i]);
      }
      printf("enter the number to check");
      scanf("%d",&num);
      for(i=0;i<n;i++)
      {
          for(j=i+1;j<n;j++)
          {
              if(arr[i]+arr[j]==num)
              printf("%d\t%d",arr[i],arr[j]);
          }
      }
      

}