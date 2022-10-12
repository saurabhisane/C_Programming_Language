#include <stdio.h>

int main()
{
    long Total_Bill, discount;
    while (1)
    {
        printf("Enter the Total Bill Amount :- ");
        scanf("%ld", &Total_Bill);
        
        if (Total_Bill <= 500)
        {
            // There is a no discount on Total_Bill..
            printf("Sorry!! There is no discount on %ld on Billing Amount. \n\n", Total_Bill);
        }

        else if ((Total_Bill > 500) && (Total_Bill < 1500))
        {
            // There is a 10% discount on Total_Bill !!
            discount = (Total_Bill * 10) / 100;
            printf("The Total Billing Amount After Discounting is %ld {10 Percent Discount} \n\n", Total_Bill - discount);
        }

        else if (Total_Bill > 1500)
        {
            // There is a 15% discount on Total_Bill !!
            discount = (Total_Bill * 15) / 100;
            printf("The Total Billing Amount After Discounting is %ld {15 Percent Discount} \n\n", Total_Bill - discount);
        }
    }
    return 0;
}
