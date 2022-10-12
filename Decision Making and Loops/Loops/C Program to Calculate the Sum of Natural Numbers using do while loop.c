#include<stdio.h>

int main()
{
    int a,b,sum=0;
    do{
    printf("Enter the positive number:= ");
    scanf("%d",&a);
    }while(a<=0);

    for(b=0;b<=a;b++)
    {
        sum += b;
    }

    printf("The sum of %d positive number is %d",a,sum);

    return 0;
}
