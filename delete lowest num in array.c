#include<stdio.h>
int main ()
{
    int n;
    printf("Index of array:");
    scanf("%d",&n);
    int a[n],i,j=0,low;
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    low=a[0];
    for(i=1;i<n;i++)
      {
        if(low>a[i])
        {
            low=a[i];
            j=i+1;
        }
      }
    for (i=j-1;i<=n-1;i++)
    {
        a[i]=a[i+1];
    }
    printf("New list of array\n");
    for(i=0;i<n-1;i++)
    {
        printf(" %d ",a[i]);
    }
}
