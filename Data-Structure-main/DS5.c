#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter number of elements--");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int k = 1;
    for (i = 0; i < n; i++)
    {
        if (k == a[i])
            k++;
        else
        {

            printf("The missing element is-- %d", k);
            break;
        }
    }
    return 0;
}