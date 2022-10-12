#include <stdio.h>

int main()
{
    long long  num;
    int digit=0;

    printf("Enter the multiple digit number..");
    scanf("%lld", &num);

    do
    {
        num = num / 10 ;
        digit++ ;

    } while (num != 0);
       
     printf("The number of digits is %d", digit);

     return 0;  
}