#include <stdio.h>

void main()
{
    int i,n;
       printf("Index:");
       scanf("%d",&n);
       int a1[n],a2[n];
       for(i=0;i<n;i++)
        {
	      printf("element - %d : ",i);
	      scanf("%d",&a1[i]);
	    }
    for(i=0; i<n; i++)
    {
        a2[i]=a1[i];
    }
    printf("\nThe first array are :\n");
    for(i=0; i<n; i++)
    {
        printf(" %d ", a1[i]);
    }
    printf("\nCopied into the second array are :\n");
    for(i=0; i<n; i++)
    {
        printf(" %d ", a2[i]);
    }
}
