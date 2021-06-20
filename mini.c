#include<stdio.h>
int main ()
{
    int n;
    printf("Element:");
    scanf("%d",&n);
    int a[n],i,low;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);}
    low=1000000;
    for(i=0;i<n;i++)
    {
        if(low>a[i]){
            low=a[i];}
    }
    printf("\n%d",low);
}
