#include<stdio.h>
int main()
{
    int n,m,i,j;
    scanf>>n;
    scanf>>m;
    int a[n],b[m];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    int c[1000]={0},x,y;

    // for union
    for(i=0;i<n;i++)
    {
        x=a[i];
        c[x]=c[x]+1;
    }
    for(i=0;i<m;i++)
    {
        y=b[i];
        c[y]=c[y]+1;
    }
    printf("\nUNION FOR THE ARRAY\n");
    for(i=0;i<1000;i++)
    {
        if(c[i]>0)
            printf("%d ",i);
    }

    // for intersection
    c[1000]=0;
    printf("\n\nINTERSECTION FOR THE ARRAY\n");
    for(i=0;i<n;i++)
    {
        x=a[i];
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j] )
            {
                if(c[x]==0)
                {
                    c[x]=c[x]+1;
                    printf("%d ",a[i]);
                }
            }
        }
    }

}