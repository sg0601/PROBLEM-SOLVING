#include <stdio.h>
void main()
{
    int n, arr[10], i, j, temp;
    printf("enter the number of elements of array");
    scanf("%d", &n);
    printf("enter thee elements of array");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    i = 0, j = n - 1;
    while (i < j && arr[i] < arr[j])
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}