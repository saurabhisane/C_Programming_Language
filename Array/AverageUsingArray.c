#include <stdio.h>

int main()
{
    int n;
    float sum = 0.0, Avg;
    printf("Enter the no of Elements in Array :-- ");
    scanf("%d", &n);

    int Number[n];
    printf("Enter the numbers.\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d.Number  = ", i + 1);
        scanf("%d", &Number[i]);
    }
    int i = 0;
    printf("\n Total sum = ");
    while ( i < n)
    {
        printf("%d + ", Number[i]);
        sum = sum + Number[i];
        i++;
    }
    printf("= %0.2f \n", sum);
    printf("Average = %0.2f \n\n", (sum / n));

    return 0;
}
