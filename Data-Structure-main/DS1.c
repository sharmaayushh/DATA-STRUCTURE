#include<stdio.h>
int main()
{
    int i,j,n1,n2;
    printf("Enter number of elements of a and b---");
    scanf("%d %d",&n1,&n2);
    int a[n1],b[n2],c[n1+n2];
    printf("Enter array a--");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
      printf("Enter array b--");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n1+n2;i++)
    {
        if(i>=n1&&i<=n2)
        {
            if(a[i]<=b[i])
            {
                c[i]=a[i];      
            }
            else
            {
                c[i]=b[i];
            }  
        }
        else if(i>n1)
        {
            c[i]=a[i];
        }
        else if(i>n2)
        {
            c[i]=b[i];
        }
        else if(i>n2&&i>n2)
        {
            break;
        }
       
    }
    for(i=0;i<n1+n2;i++)
    {
        printf("%d",c[i]);
    }
    return 0;
}