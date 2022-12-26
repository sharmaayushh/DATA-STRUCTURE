#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter size of array-");
    scanf("%d",&n);
    int arr1[50],arr2[50];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<n;i++)
    {
        static int k=0;
        if(arr1[i]!=0)
        {
        arr2[k]=arr1[i];
        k++;
        }
        else
        {
            arr2[k]=0;
            arr2[k+1]=0;
            k=k+2; 
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",arr2[i]);
    }
    return 0;
}