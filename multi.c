#include<stdio.h>
void main()
{
    int a,b,i,j,f=0;
    printf("enter your numbers:\n");
    scanf("%d",&a);
    printf("\nenter your multiplicition:\n");
    scanf("%d",&b);
    printf("\nenter your multiplicition:\n");
    scanf("%d",&b);
   for(i=1;i<=a;i++)
   {
      for(j=1;j<=b;j++)
      {
        f=i*j;
        printf("%dX%d=%d\n",i,j,f);
      }
            printf("\n");
   }
}

