#include<stdio.h>
int main ()
{
    int n;
    printf("Index:");
    scanf("%d",&n);
    int a[n],b[n],c[n],i,j=0,k=0;
    for(i=0;i<n;i++)
        {printf("element-%d is ",i);
        scanf("%d",&a[i]);}
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
            { b[j]=a[i];
              j++; }
            else
            { c[k]=a[i];
              k++; }
    }
    printf("Even numbers of the element\n");
    for(i=0;i<j;i++)
        {printf(" %d\t",b[j]);}
    printf("\nOdd numbers of the element\n");
    for(i=0;i<k;i++)
        {printf(" %d\t",c[k]);}
    return 0;
}
