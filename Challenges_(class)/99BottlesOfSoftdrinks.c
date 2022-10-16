#include <stdio.h>
#include <conio.h>

int main()
{
    int n = 2;
    int i = 100;
    while (i > n )
    {
        printf("%d bottles of softdrinks on the wall, %d bottles of sofdrink.\n", i-1, i-1);
        printf("Take one down and pass it around, %d bottles of softdrink on the wall.\n\n", i - 2
        );
        getch();
        i--;
    }
    printf("1 bottles of softdrinks on the wall, 1 bottles of sofdrink.\n");
    printf("Take one down and pass it around, no more bottles of softdrink on the wall.\n\n");
    printf("No more bottles of beer on the wall, no more bottles of beer.\n");
    printf("Go to the store and buy some more, 99 bottles of beer on the wall.\n\n");
    return 0;
}



