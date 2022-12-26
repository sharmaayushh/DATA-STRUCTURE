#include <stdio.h>
int seq(int n, int m);
int main()
{
    int n, z;
    printf("Enter value of n--");
    scanf("%d", &n);
    printf("%d ",n);
    printf("%d ",n-5);
    z= seq(n-5,n);
    return 0;
}
int seq(int n, int m)
{
    static int flag=0;
    if(n==m)      
    {

        return m;
    }
    else if(n<=0 ||flag>0)
    {
        flag++;
        printf("%d ", n+5);
        return seq(n+5, m);
    }
    else{
        printf("%d ",n-5);
        return seq(n-5, m);
    }
}