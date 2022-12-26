#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter value of n--");
    scanf("%d",&n);
    for(j=1;j<2*n;j++)
    {
        for(i=1;i<2*n;i++)
    {
        if(i==1||i==(2*n)-1||j==1||j==(2*n)-1)
        {
            printf("%d",n);
        }
        else
        {
    
        } 
    }
     printf("\n");
    }
    return 0;
}