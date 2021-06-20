#include <stdio.h>
void main()
{
    int arr1[100];
    int i,j, n, ctr = 0;
       printf("Input the number of elements to be stored in the array :");
       scanf("%d",&n);
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
        {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
        }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr1[i]==arr1[j])
            {
                ctr++;
                break;
            }
        }
    }
    printf("\nTotal number of duplicate elements found in the array is : %d\n\n", ctr);
}
