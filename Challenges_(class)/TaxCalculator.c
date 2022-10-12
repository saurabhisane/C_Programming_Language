#include <stdio.h>

int main()
{
    long long Total_Income, Tax;
    while (1)
    {
        printf("**********************************************************************************************\n");
        printf("                                   INCOME TAX CALCULATOR                                      \n");
        printf("**********************************************************************************************\n");

        printf("Enter the Total Salary Income..\n");
        scanf("%lld", &Total_Income);

        if (Total_Income < 500000)
        {
            // There is a no income tax on Total Salary Income..
            printf("There is no income tax on %ld \n\n", Total_Income);
        }

        else if ((Total_Income > 500000) && (Total_Income < 1000000))
        {
            // There is a 10% income tax on Total Salary Income..
            Tax = (Total_Income * 10) / 100;
            printf("The Total Income Tax is %lld \n\n", Tax);
        }
        else if ((Total_Income > 1000000) && (Total_Income < 2000000))
        {
            // There is a 20% income tax on Total Salary Income..
            Tax = (Total_Income * 20) / 100;
            printf("The Total Income Tax is %lld \n\n", Tax);
        }

        else if (Total_Income > 2000000)
        {
            // There is a 30% income tax on Total Salary Income..
            Tax = (Total_Income * 30) / 100;
            printf("The Total Income Tax is %lld \n\n", Tax);
        }
    }
    return 0;
}
