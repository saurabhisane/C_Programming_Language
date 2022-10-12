#include <stdio.h>
int main()
{
    int a, b,i, gcd;

    printf("Enter the two positive integer value.");
    scanf("%d %d", &a, &b);

    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    
    }
    printf("The GCD is %d", gcd);
    return 0;
}