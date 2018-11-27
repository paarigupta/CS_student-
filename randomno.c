#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n , i;
    printf("The three random number between 1 to 100.\n");
    for( i=1 ; i<=3 ; i++)
    {
    n = rand() % 100 + 1;
    // n = rand() % ((upper limit - lower limit )+ 1) + lower limit
        printf("%d\n",n);
    }
    return 0;
}
