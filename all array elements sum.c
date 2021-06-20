#include<stdio.h>
void main()
{
    int n;
    printf("Index:");
    scanf("%d",&n);
    int a[n],i,s=0;
    for (i=0;i<n;i++)
    { printf("element-%d :",i);
        scanf("%d",&a[i]); }
    for (i=0;i<n;i++){
        s=s+a[i];}
        printf("\nthe sum of all elements: %d\n",s);
}

