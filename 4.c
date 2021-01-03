#include <stdio.h>
void main()
{
    int n, arr[10], i, count1 = 0, count2 = 0, count3 = 0;
    printf("enter the number of elements of array");
    scanf("%d", &n);
    printf("enter thee elements of array");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {

            count1++;
        }
        if (arr[i] == 1)
        {
            count2++;
        }
        if (arr[i] == 2)
        {
            count3++;
        }
    }
    
    i = 0;
    while (count1 > 0)
    {
        arr[i++] = 0;
        count1--;
    }
    while (count2 > 0)
    {
        arr[i++] =1;
        count2--;
    }
    while (count3 > 0)
    {
        arr[i++] =2;
        count3--;
    }

    for (i = 0; i < n; i++)
    {
         printf("%d\t", arr[i]);
    }
}