#include <stdio.h>

int main()
{
    int n;
    long arr[100];

    printf("Enter the no of elements in the Array := ");
    scanf("%ld", &n);

    printf("Enter the numbers.");

   for (int i = 0; i < n; ++i)
    {
        printf("\n %d.Number:-", i + 1);
        scanf("%ld", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[0] < arr[i])
        {
            arr[0] = arr[i];
        }
    }
    printf("The Largest Number is %ld\n", arr[0]);
    return 0;
}
 