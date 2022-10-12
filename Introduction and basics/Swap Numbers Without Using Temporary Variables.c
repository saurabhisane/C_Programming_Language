#include<stdio.h>

 int main()
 {
     double a,b;

     printf("Enter the numbers\n");
     scanf("%lf %lf",&a,&b);

     a = a-b;
     b = a+b;
     a = b-a;

     printf("After swapping, a = %.2lf\n", a);
     printf("After swapping, b = %.2lf", b);


 }
