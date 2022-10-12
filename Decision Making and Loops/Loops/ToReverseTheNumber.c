#include <stdio.h>

int main()
{
    int num;
    int reverse = 0, remainder;
    printf("ENTER THE NUMBER..");
    scanf("%d", &num);

     while (num != 0)
    {
        remainder = num % 10;
        reverse = remainder + reverse * 10;
        num = num / 10;
    }

    printf("THE REVERSE NUMBER IS %d", reverse);

    return 0;
}