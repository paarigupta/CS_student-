#include<stdio.h>
int main()
{
    int i;
    for(i=11 ; i<=55 ; i++)
    {
        if(i%11==0)
            printf("\n\n");
            if(i%3==0 && i%5==0)
            {
                printf("DoRe ");
            }
            else if(i%3==0 && i%7==0)
                    {
                        printf("DoMe ");
                    }
            else if(i%3==0)
            {
                printf("Do ");
            }
            else if(i%5==0)
            {
                printf("Re ");
            }
            else if(i%7==0)
            {
            printf("Mi ");
            }
        else if(i%3!=0 && i%5!=0 && i%7!=0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
