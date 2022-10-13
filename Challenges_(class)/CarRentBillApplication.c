#include <stdio.h>

int main()
{
    int km, rent;
    while (1)
    {

        printf("Enter the no of kms.");
        scanf("%d", &km);

        if (km <= 100)
        {
            rent = km * 25;
            printf("**********************************************************************************************\n");
            printf("                                        car bill                                              \n");
            printf("**********************************************************************************************\n");

            printf("NO OF KILOMETERS :-- %d\n", km);
            printf("The Rent per km is 25 !!\n");
            printf("Car Rent = %d * 25 = %d\n", km, rent);
            printf("*******************************  THANK YOU **************************************************\n\n\n");
        }
        else if (km > 100)
        {
            rent = km * 15;
            printf("**********************************************************************************************\n");
            printf("                                        car bill                                              \n");
            printf("**********************************************************************************************\n");

            printf("NO OF KILOMETERS :-- %d\n", km);
            printf("The Rent per km is 15 !!\n");
            printf("Car Rent = %d * 15 = %d\n", km, rent);
            printf("*******************************  THANK YOU **************************************************\n\n\n");
        }
    }
    return 0;
}
