#include<stdio.h>
int main()
{
        printf(" *|\t1\t2\t3\t4\t5\t6\t7\t8\t9\n");
        printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
        int i ,j ,a;
            for(i=1 ; i<=9 ; i++)
            {
                for(j=0 ; j<=9 ; j++)
                {
                    if(j==0)
                    {
                        printf("%d\t",i);
                    }
                    else
                    {
                    a=i*j;
                    printf("%d",a);
                    printf("\t");
                    }
                }
                printf("\n");
            }

    return 0;
}
