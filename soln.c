#include<stdio.h>
int main()
{
    float radius=0;
    float area;
    char choice;
    do
    {
    printf("Radius = ?\n");
    scanf("%f",&radius);
    area = 3.14285 * radius * radius;
    printf("Area = %.4f\n",area);
    printf("Do you wish the repeat the calculation (y/n)\t");
    scanf(" %c ",&choice);
    }while( choice == 'y');
    if ( choice == 'n')
    {
        printf("Goodbye");
    }
    return 0;
}
