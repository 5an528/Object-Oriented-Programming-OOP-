#include <stdio.h>
void main()
{
    int i,j, n, ctr = 0;
       printf("Input the number of elements to be stored in the array :");
       scanf("%d",&n);
       int a[n];
       for(i=0;i<n;i++)
        {printf("element - %d : ",i);
	      scanf("%d",&a[i]);}
       for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++){
        if(a[i]!=a[j]){
            ctr++;
            break;}
        }
    }
    printf("\nTotal number of duplicate elements found in the array is : %d\n\n", ctr);
}
