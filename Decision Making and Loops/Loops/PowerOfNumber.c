#include<stdio.h>

int main()
{
   const int a,b;
   int value;

    printf("Enter the BASE NUMBER and EXPONENT.");
    scanf("%d %d",&a,&b);

    value = a;

    for (int i = 1; i < b; i++)
    {
        value = value*a;
    }
    printf("The value of power is %d",value);

    return 0;
}