#include <stdio.h>
void main()
{
   int a[100],i,j,n,v,t;
      printf("Input the size of array : ");
       scanf("%d", &n);
       for(i=0;i<n;i++)
	     {printf("element - %d : ",i);
	      scanf("%d",&a[i]);}
   printf("Input the value to be inserted : ");
   scanf("%d",&v);
   a[n]=v;
    for (i=0;i<=n;i++){
        for (j=i+1;j<=n;j++){
            if(a[i]>a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;}}}
    for (i=0;i<=n;i++)
    printf("%d\t",a[i]);
}
