//transpose
#include<stdio.h>
int main()
{
    int m,n,i,a[100][100],j;
    printf("Enter number of rows and columns--");
    scanf("%d%d",&m,&n);
    printf("Enter array--");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            a[j][i]=a[i][j];
        }
    }
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
        }
    }
    return 0;
}
