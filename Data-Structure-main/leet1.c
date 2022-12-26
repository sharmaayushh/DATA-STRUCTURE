#include<stdio.h>
int main(){
    int n,i,j,c=0,count=0;
    printf("Enter value of n-");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            count++;
        }  
        if(count==2)
    {
        c++;
    } 
    }
       
    printf("%d",c);
    return 0;
}