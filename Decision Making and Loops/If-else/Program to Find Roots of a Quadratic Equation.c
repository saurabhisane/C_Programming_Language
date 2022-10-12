#include<stdio.h>
#include<math.h>

int main()
    {
        double a,b,c,discriminent,root1,root2,real_part,imaginary_part;

        printf("Enter the coefficients of a , b and c \n");
        scanf("%lf %lf %lf",&a,&b,&c);

        discriminent= b*b - 4*a*c;

        if(a != 0)
        {
            if (discriminent == 0)
            {
                printf("The roots are real and equal.\n");
                root1 = root2 = (-b) / (2*a);
                printf("root 1 = root 2 = %0.2f",root1);
            }
            else if(discriminent > 0)
            {
                printf("The roots are real and different.\n ");
                root1 = ((-b) + sqrt(discriminent))/ (2*a);
                root2 = ((-b) - sqrt(discriminent))/ (2*a);
                printf("root1= %0.2f\n root2= %0.2f",root1,root2);
            }
            else
            {
                printf("The roots are complex and different.\n");
                real_part = -b / (2*a);
                imaginary_part = (sqrt(-discriminent))/(2*a);
                printf("root 1 = %0.2lf+%0.2lfi\n root 2= %0.2lf-%0.2lfi",real_part,imaginary_part,real_part,imaginary_part);
            }
        }




    }
