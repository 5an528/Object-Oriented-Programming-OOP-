#include <stdio.h>
int main ()
{
    int a1[5][5],a2[5][5],a3[5][5],i,j;
    printf("Input the first matrix\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
    printf("Input the second matrix\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a2[i][j]);
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            a3[i][j]=a1[i][j]+a2[i][j];
        }
    }
    printf("Sum of matrix\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d\t",a3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
