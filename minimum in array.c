#include<stdio.h>
int main ()
{
    int n;
    printf("Index of array:");
    scanf("%d",&n);
    int a[n],i,j,min;
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=100000;
    for(i=0;i<n;i++)
      {
        if(min>a[i])
        {
            min=a[i];
            //j=i+1;
        }
      }
    printf("\nMinimum number is %d",min);
}
