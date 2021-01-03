#include <stdio.h>
#include<stdlib.h>
void main()
{
    int n, arr[10], left, right, temp, i, j, currsum = 0, a, b,closesum=9999;
    printf("enter the number of elements in an array");
    scanf("%d", &n);
    printf("enter the elements of array");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    left =0;
    right = n-1;
    while(left<right)
    {
        currsum=arr[left]+arr[right];
        if(abs(currsum)<abs(closesum))
        {
            closesum=currsum;
            a=left;
            b=right;
        }
        if(currsum<0)
        left++;
        else
        {
            right--;
        }
        
    }
    printf("elements whose sum is closest to 0 are %d\t%d\n",arr[a],arr[b]);
    printf("closest sum is %d",closesum);
    
}