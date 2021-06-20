#include<stdio.h>
int main ()
{
    int n;
    printf("Index of array:");
    scanf("%d",&n);
    int a[n],i,j,max;
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<n;i++)
      {
        if(max<a[i])
        {
            max=a[i];
            //j=i+1;
        }
      }
      printf("\nMaximum number is %d",max);
}
