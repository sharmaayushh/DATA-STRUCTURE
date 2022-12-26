#include<stdio.h>
int main()
{
    
 int arr1[20],arr2[20],i,j,m,n,arr3[20],k=0;
 printf("Enter size of 1st set: ");
 scanf("%d",&m);
 printf("Enter the elements--");
 for(i=0;i<m;i++)
 {
 scanf("%d",&arr1[i]);
 }
 printf("\nEnter size of 2nd set: ");
 scanf("%d",&n);
printf("Enter the elements--");
 for(i=0;i<n;i++)
 {
 scanf("%d",&arr2[i]);
 }
 for(i=0;i<n;i++)
 {
 for(j=0;j<m;j++)
 {
 if(arr2[i]==arr1[j])
 {
 arr3[k]=arr2[i];
 k++;
 }
 }
 }
 printf("\nIntersection of two sets is: ");
 for(i=0;i<k;i++)
 {
 printf("%d,",arr3[i]);
 }
 return 0;
}

