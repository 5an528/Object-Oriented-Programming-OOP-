#include <stdio.h>
int main()
{
    int number, i,sum=0,T=5;

    while(T--)
    {
        printf("\nEnter a positive integer: ");
        scanf("%d",&number);

        printf("Factors of %d are: ", number);
        for(i=1; i <= number; ++i)
        {
            if (number%i == 0)
            {
                printf("%d ",i);
                sum=sum+i;
            }
        }
        if(sum%2!=0)
            printf("\n%d is a Magic Number",number);
        else
            printf("\n%d is not a Magic Number",number);
    }

    return 0;
}
