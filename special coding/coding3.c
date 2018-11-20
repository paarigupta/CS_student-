#include<stdio.h>
int main()
{
    int i=1,n, sum1=0 , sum2=0;
    printf("enter the number upto which you want to calculate\n");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2==0)
        {
         sum1 = sum1 + i;
        }
        else
        {
        sum2 = sum2 + i;
        }
        i=i+1;
    }
    printf("the sum of even number %d",sum1);
    printf("\nthe sum of odd numbers is %d",sum2);
    return 0;
}
