#include <stdio.h>
void main()
{
    int n;
       printf("Index: ");
       scanf("%d", &n);
       int a[n],i,p;
       for(i=0;i<n;i++)
        {
	      scanf("%d",&a[i]);
	    }
    printf("\nInput the position where to delete: ");
    scanf("%d",&p);
    for (i=p-1;i<n;i++)
    {
        a[i]=a[i+1];
    }
    printf("New list of array\n");
    for(i=0;i<n-1;i++)
    {
        printf(" %d ",a[i]);
    }
}
