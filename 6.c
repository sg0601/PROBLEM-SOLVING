#include <stdio.h>
void main()
{
    int n, arr1[10], i, j, temp,m,arr2[10],arr3[20]={0},k;
    printf("enter the number of elements in an array 1");
    scanf("%d", &m);
    printf("enter trhe number of elements in array 2");
    scanf("%d",&n);
    printf("enter the elements of array 1");
    for (i = 0; i < m; i++)
        scanf("%d", &arr1[i]);
        printf("enter the elements of array 2");
    for (i = 0; i < n; i++)
        scanf("%d", &arr2[i]);
    
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr1[i] > arr1[j])
            {
                temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
        }
    }
     for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr2[i] > arr2[j])
            {
                temp = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = temp;
            }
        }
    }

for(i=0;i<m;i++)
{
    arr3[i]=arr1[i];
}
i=0,j=0;
for(k=m;k<m+n;k++)
{
    if(arr1[i]==arr2[j])
    {
        i++;
        j++;
    }
    else
    {
        arr3[k]=arr2[j];
        i++;
        j++;
    }
    
}
    for (i = 0; i < m+n; i++)
    {
        printf("%d\t", arr3[i]);
    }
}
