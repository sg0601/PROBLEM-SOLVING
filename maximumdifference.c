#include <stdio.h>
void main()
{
    int n, i, j, arr[10], temp, temp1, diff, currmax = 0;
     printf("enter the number of elements in an array");
    scanf("%d", &n);
    printf("enter the elements of array");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            diff = arr[j] - arr[i];
            
            if (arr[j] > arr[i] && diff > currmax)
            {
                currmax = diff;
                temp=arr[j];
            temp1=arr[i];
            }
            else
                currmax = currmax;
        }
    }
    printf("maximum difference is %d\t :elements are %d\t%d",currmax,temp,temp1);
}