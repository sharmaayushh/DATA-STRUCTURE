#include<stdio.h>
int main()
{
    int i,j,n1,n2,d,f;
    printf("Enter number of elements of a and b---\n");
    scanf("%d %d",&n1,&n2);
    int a[100],b[100],c[100];

    printf("Enter array a--\n");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
        c[i]=a[i];
    }
    printf("Enter array b-\n");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n2;i++)
    {
        c[i+n1]=b[i];
    }
    for(i=0;i<n1+n2;i++)
    {
        printf("%d",c[i]);
    }
    return 0;
}