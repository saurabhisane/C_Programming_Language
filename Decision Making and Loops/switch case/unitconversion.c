#include<stdio.h>

int main()
{
    char input;
    float kmsToMiles =0.621371;
    float inchesToFoot =0.0833333;
    float cmsToInches =0.393701;
    float poundToKgs =0.453592;
    float inchesToMeters =0.0254;
    float first,second;

    while(1)
    {
        printf("Enter the input character.\n q for quit.\n   1. Kms To Miles\n   2. Inches To Foot\n   3. Cms To Inches\n   4. Pound To Kgs\n   5. Inches To Meters\n");
        scanf("%c", &input);

        switch(input)
        {
          case 'q':
              printf("Quitting the program....\a\a\a\a\n");
              goto end;
              break;

          case '1':
              printf("Enter the quantity in terms of first unit.\n");
              scanf("%f",&first);
              second = kmsToMiles * first;
              printf("%.2f Kms is equal to %.2f miles\n",first,second);
              break;

          case '2':
              printf("Enter the quantity in terms of first unit.\n");
              scanf("%f",&first);
              second = inchesToFoot * first;
              printf("%.2f Inches is equal to %.2f Foot\n",first,second);
              break;

          case '3':
              printf("Enter the quantity in terms of first unit.\n");
              scanf("%f",&first);
              second = cmsToInches * first;
              printf("%.2f Cm is equal to %.2f Inhces\n",first,second);
              break;

          case '4':
              printf("Enter the quantity in terms of first unit.\n");
              scanf("%f",&first);
              second = poundToKgs * first;
              printf("%.2f Pounds  is equal to %.2f Kgs\n",first,second);
              break;

          case '5':
              printf("Enter the quantity in terms of first unit.\n");
              scanf("%f",&first);
              second = inchesToMeters * first;
              printf("%.2f Inches is equal to %.2f Meters\n",first,second);
              break;

          default:
            break;

        }

    }
    end:


 return 0;

}
