#include<stdio.h>
void main()
{
    int n,arr[10],prod[10]={1},index,temp;
    printf("enter tehe number of elements");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(index=0;index<n;index++)
    scanf("%d",&arr[index]);
temp=1;
for(index=0;index<n;index++)
{
    prod[index]=temp;
    temp=temp*arr[index];
}
temp=1;
for(index=n-1;index>=0;index--)
{
    prod[index]=prod[index]*temp;
    temp=temp*arr[index];
}
    
        
    for(index=0;index<n;index++)
    printf("%d\t",prod[index]);
}