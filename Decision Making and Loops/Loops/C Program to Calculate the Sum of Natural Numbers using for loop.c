#include<stdio.h>

int main()
{
    int a,b,sum=0;

    printf("Enter the positive number:= ");
    scanf("%d",&a);

    for(b=0;b<=a;b++)
    {
        sum += b;
    }

    printf("The sum of %d positive number is %d",a,sum);

    return 0;
}
