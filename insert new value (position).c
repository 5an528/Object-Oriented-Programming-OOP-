#include <stdio.h>
void main()
{
   int arr1[100],i,n,p,x;
      printf("Input the size of array : ");
       scanf("%d", &n);
       for(i=0;i<n;i++)
	     {printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);}
   printf("Input the value to be inserted : ");
   scanf("%d",&x);
   printf("Input the Position, where the value to be inserted :");
   scanf("%d",&p);
   printf("The current list of the array :\n");
   for(i=0;i<n;i++)
      printf(" %d ",arr1[i]);
   for(i=n;i>=p;i--){
      arr1[i]= arr1[i-1];}
      arr1[p-1]=x;
   printf("\nAfter Insert the element the new list is :\n");
   for(i=0;i<=n;i++)
      printf(" %d ",arr1[i]);
}
