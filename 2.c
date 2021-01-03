#include <stdio.h>
void main()
{
    int n, arr[10], i, j, min, max;
    printf("enter the number of elements of array");
    scanf("%d", &n);
    printf("enter thee elements of array");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    min = arr[0];
    max = arr[1];
    for (i = 2; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    printf("minimum element is %d\t maximum element is %d\t", min, max);
}