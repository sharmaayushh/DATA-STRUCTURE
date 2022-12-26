#include<stdio.h>
int main()
{
    int n ,i;
    printf("Enter number of elements--");
    scanf("%d",&n);
    int pos,val,a[n];
    printf("Enter position and value of element to be inserted--");
    scanf("%d %d",&pos,&val);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b[n+1];
    for(i=0;i<n+1;i++)
    {
        if(i<pos)
        b[i]=a[i];
        else if(i==pos)
        b[i]=val;
        else
        b[i]=a[i-1];
    }
    printf("\nNew array: \n");
    for(i=0;i<n+1;i++)
    {
        printf("%d ",b[i]);

    }
    return 0;
}