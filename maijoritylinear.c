#include <stdio.h>
void main()
{
    int n, arr[10], i,j;
    printf("enter the number of elements");
    scanf("%d", &n);
    printf("enter the elements of array");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0,j=i+n/2; i <= n / 2; i++)
    {
        if (arr[i] == arr[j])
        {

            printf("maijority element is %d", arr[i]);
            break;
        }
    }
}