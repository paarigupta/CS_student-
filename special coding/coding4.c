#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("The numbers in descending order are:\n");
    if(a>b)
    {
        if(a>c)
        {
            if(b>c)
            {
                printf("%d  %d  %d",a,b,c);
            }
            else
            {
                printf("%d  %d  %d",a,c,b);
            }
        }
            else
            {
                printf("%d  %d  %d",c,a,b);
            }
        }
        else if(b>c)
        {
            if(a>c)
            {
                printf("%d  %d  %d",b,a,c);
            }
            else
            {
                printf("%d  %d  %d",b,c,a);
            }
        }
            else
            {
                printf("%d  %d  %d",c,b,a);
            }
            return 0;
        }
