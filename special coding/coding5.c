#include<stdio.h>
#include<math.h>
int main()
{
    int x;  double y;
    for(x=-10 ; x<=10 ; x+=2)
    {
        y=(pow(x,2)+1.5*x+5)/(x-3);
        printf("For x=%d \t f(x)=%lf\n\n",x,y);
    }
    return 0;
}
