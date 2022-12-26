#include<stdio.h>
int main()
{
    int n ,i;
    printf("Enter number of elements--");
    scanf("%d",&n);
    int val,a[n];
    printf("Enter value of element to be inserted--");
    scanf("%d",&val);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b[n+1];
    for(i=0;i<n+1;i++)
    {
        if(a[i]<val)
        b[i]=a[i];
        else if(a[i]>val&&a[i-1]<val)
        b[i]=val;
        else
        b[i]=a[i-1];
    }  
    printf("\n New array: \n");

    for(i=0;i<n+1;i++)
    {
        printf("%d",b[i]);
    }
    return 0;
}