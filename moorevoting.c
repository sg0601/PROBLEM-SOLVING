#include <stdio.h>
#include <process.h>
void main()
{
    int n, arr[10], i, j, voter, votes,count=0;
    printf("enter the number of elements");
    scanf("%d", &n);
    printf("enter the elements of array");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
               i=0;    
             votes=0;

        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                voter = arr[i];
                votes++;
                i++;
            }
                if (votes > (n + 2 / 2))
             {
                    voter = arr[i];
                printf("voter is %d \n vote count is %d\n", voter, votes);
                exit (0);
            }
            }
        }
    

        for (i = 0; i < n; i++)
    {
        if (arr[i] == voter)
            count++;
    }
    if (count> (n + 2 / 2))
        printf("moores voting element is %d", voter);
}
