#include<stdio.h>

int main()
{

    int a,b,c;

    printf("%s","Enter the first number:");
    scanf("%d ",&a);
    printf("%s","Enter the second number:");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;

    printf("first number:a=%d\n",a);
    printf("second number:%b=%d\n",b);

    return 0;
}
