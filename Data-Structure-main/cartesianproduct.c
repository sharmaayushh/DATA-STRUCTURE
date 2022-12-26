#include<stdio.h>
int main()
{
    int A[50],B[50],i,m,n,j;
    printf("Enter the number of elemets in set A-");
    scanf("%d",&m);
     printf("Enter the number of elemets in set B-");
    scanf("%d",&n);
    printf("Total number of cartesian products are--%d\n",m*n);
    printf("ENter elemnts of set A--");
    for(i=0;i<m;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter elemnts of set b--");
    for(i=0;i<n;i++)
    {
        scanf("%d",&B[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("(%d,%d)\n",A[i],B[j]);
        }
    }
    return 0;  
}