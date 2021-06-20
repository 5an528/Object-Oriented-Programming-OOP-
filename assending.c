#include <stdio.h>
void main()
{
    int n, i, j, t;
    printf("Input the size of array : ");
    scanf("%d", &n);
    int a[n];
       for(i=0;i<n;i++)
        {
	      printf("element - %d : ",i);
	      scanf("%d",&a[i]);
        }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    printf("\nElements of array in sorted ascending order:\n");
    for(i=0; i<n; i++)
    {
        printf("%d  ", a[i]);
    }

    printf("\nMaximum is %d and Minimum is %d\n",a[n-1],a[0]);
}
