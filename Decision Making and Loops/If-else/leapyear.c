#include<stdio.h>

 int main()
 {
    int a;

    printf("Enter a year..");
    scanf("%d",&a);

    if(a % 4 == 0)
    {
        printf("%d is a leap year..",a);
    }
    else if(a % 4 != 0)
    printf("%d is not a leap year..",a);

    return 0;
 }