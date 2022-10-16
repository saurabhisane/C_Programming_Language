#include <stdio.h>
#include<math.h>

int main()
{
    int n;
    double sum = 0, mean,sigma_square=0,Variance;
    printf("Enter the no of Elements in the Array..\n");
    scanf("%d", &n);

    double arr[n];
    for (int i = 0; i < n; i++)
    {
        printf(" %d.Number:-", i + 1);
        scanf("%lf", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    mean = sum / n;
    printf("*********************************************************************************************\n");
    printf("Mean = %0.2f\n\n", mean);

    for (int i = 0; i < n; i++)
    {
        sigma_square += (arr[i]-mean)*(arr[i]-mean);
    }
    Variance = sigma_square/n;

    printf("Variance := %0.2f\n\n",Variance);

    printf("Standard Deviation := %0.2f\n\n",sqrt(Variance));
    printf("*********************************************************************************************\n");

    return 0;
}
