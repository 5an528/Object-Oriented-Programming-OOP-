#include<stdio.h>
void main ()
{
    int n;
    printf("Index:");
    scanf("%d",&n);
    int a[n],i,s;
    for(i=0;i<n;i++){
        printf("Input");
        scanf("%d",&a[i]);}
    printf("Your search number");
    scanf("%d",&s);
    for(i=0;i<n;i++){
        if(a[i]==s)
        printf("Number Found");}
}
