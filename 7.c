#include <stdio.h>
void main()
{
    int n, arr[10], i, j, temp;
    printf("enter the number of elements in an array");
    scanf("%d", &n);
    printf("enter the elements of array");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    temp = arr[n - 1];
    i = n - 1, j = n - 2;
    while (i > 0)
    {
        arr[i] = arr[j];
        i--;
        j--;
    }
    if (i == 0)
        arr[i] = temp;
    for (i = 0; i < n; i++)
        printf("%d\t", arr[i]);
}