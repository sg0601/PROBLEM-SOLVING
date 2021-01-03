#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n, arr[10], leftsum[10] = {0}, rightsum[10] = {0}, i, j, sum = 0, sum1 = 0;
    printf("enter the number of elements in an array");
    scanf("%d", &n);
    printf("enter the elements of array");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n; i++)
    {

        sum = sum + arr[i];
        leftsum[i] = sum;
    }

    i = 0;
    for (i = n - 1; i >= 0; i--)
    {

        sum1 = sum1 + arr[i];
        rightsum[i] = sum1;
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (leftsum[i] == rightsum[j])
            {
                printf("equilibrium index is at index %d", i);
                exit(0);
            }
        }
    }
}
