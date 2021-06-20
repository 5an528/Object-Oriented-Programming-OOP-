#include<stdio.h>
void main()
{
    int n;
    printf("Index:");
    scanf("%d",&n);
    int a[n],i;
    for (i=0;i<n;i++)
    { printf("element-%d :",i);
        scanf("%d",&a[i]); }
    printf ("Your entered numbers are given below\n");
    for(i=0;i<n;i++){
        printf(" %d ",a[i]);}
    printf("\nReverse your entered number\n");
    for(i=n-1;i>=0;i--){
        printf(" %d ",a[i]);}

}
