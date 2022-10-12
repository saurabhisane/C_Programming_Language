#include<stdio.h>

int main()
{
    int i,n;

    int a=0;
    int b=1;

    int next_term = a+b;

    printf("Enter the no of terms..");
    scanf("%d",&n);

    printf("fibonacci series : %d , %d , ",a,b);

    for(i=3;i<=n;i++)
    {
        printf("%d , ",next_term);
        a = b;
        b = next_term;
        next_term = a+b;
    }

}
