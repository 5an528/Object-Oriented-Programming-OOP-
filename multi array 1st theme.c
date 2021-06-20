#include<stdio.h>
void main ()
{
    int r,c;
    printf("raw:");
    scanf("%d",&r);
    printf("Colum:");
    scanf("%d",&c);
    printf("\n");
    int a[r][c],i,j;
    for (i=0;i<r;i++){
        {for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);}}
        printf("\n");
    for (i=0;i<r;i++){
        {for(j=0;j<c;j++)
            printf("%d",a[i][j]);}
            printf("\n");}
}
