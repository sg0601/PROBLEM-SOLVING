#include<stdio.h>
void main()
{
    int n,arr[10],i,result=0;
    printf("enter the number of elements of array");
    scanf("%d",&n);
    printf("enter then elements of array");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    // XOR OPERATION IN C
    result=result^arr[i];
    printf("ELEMENT OCCOURING ODD NUMBER OF TIMES IS %d",result);
}