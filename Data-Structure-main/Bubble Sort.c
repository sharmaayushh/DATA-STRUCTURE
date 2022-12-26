#include<stdio.h>
int main()
{
    int i,j,n,k;
    printf("Enter size of arrays--");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                k=a[j];
                a[j]=a[j+1];
                a[j+1]=k;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d aZ ",a[i]);
    }
    return 0;
}