#include<stdio.h>
int main()
{
    int n ,i;
    printf("Enter number of elements--");
    scanf("%d",&n);
    int pos,a[n];
    printf("Enter position of element to be deleted--");
    scanf("%d",&pos);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b[n-1];
    for(i=0;i<n-1;i++)
    {
        if(i<pos)
        b[i]=a[i];
        else if(i==pos)
        b[i]=a[i+1];
        else
        b[i]=a[i+1];
    }
    printf("\nNew array: \n");
    for(i=0;i<n-1;i++)
    {
        printf("%d ",b[i]);

    }
    return 0;
}
