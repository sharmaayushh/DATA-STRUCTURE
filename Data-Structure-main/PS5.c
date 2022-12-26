#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,i,j,fact=1,sum=1;
    printf("Enter value of x--");
    scanf("%d",&x);
    printf("Enter number of terms--");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        fact=fact*i;
         sum=sum+((pow(x,i)/fact)*pow(-1,i));
    }    
    printf("%d",sum);
    return 0;
}