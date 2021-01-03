#include <stdio.h>
#include<stdlib.h>
void main()
{
    int n, arr[10], left, right, i, j, x, sum = 0;
    printf("enter the number of elements in an array");
    scanf("%d", &n);
    printf("enter the elements of array");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("enter the triplet to check");
    scanf("%d", &x);
    i = 0;

    for (i = 0; i < n - 2; i++)
    {
        left = i + 1;
        right = n - 1;
        while (left < right)
        {
            sum = arr[i] + arr[left] + arr[right];
            if (sum == x)
            {

                printf("triplet found");
                exit(0);
            }
            if (sum < x)
                left++;
            else
            {
                right--;
            }
        }
    }

    printf("triplet not found");
}