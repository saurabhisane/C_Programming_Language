#include<stdio.h>

int main()
    {
        int n;
        printf("Enter the n := ");
        scanf("%d",&n);
        int apple[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",apple + i);
        }
        
        for (int i = 0; i < n; i++)
        {
            printf("%d \n", *(apple + i));
        }
        

        return 0;
    }
