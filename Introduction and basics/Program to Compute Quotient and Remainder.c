#include<stdio.h>

int main()
{
    int dividend,quotient,divisor,remainder;

    printf("Enter the dividend\n");
    scanf("%d",&dividend);

    printf("Enter the divisor\n");
    scanf("%d",&divisor);

    quotient = dividend /divisor;
    remainder = dividend % divisor;

    printf("The quotient is %d\n",quotient);
    printf("The remainder is %d",remainder);
}

