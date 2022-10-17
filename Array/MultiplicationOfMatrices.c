#include <stdio.h>

void Get_Matrix(int Matrix[10][10], int row, int column)
{
    printf("\nEnter the Matrix Elemnts.\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Matrix Element a%d%d := ", i + 1, j + 1);
            scanf("%d", &Matrix[i][j]);
        }
    }
}

void Get_Multiply_Matrix_first_and_second(int first[10][10], int second[10][10], int Multiply_Matrix[10][10], int r1, int c1, int r2, int c2)
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            Multiply_Matrix[i][j] = 0;
        }
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                Multiply_Matrix[i][j] += first[i][k] * second[k][j];
            }
        }
    }
}

void Display(int result[10][10], int row, int column)
{
    printf("\nThe resultant Matrix is \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%2d ", result[i][j]);
            if (j == column - 1)
            {
                printf("\n");
            }
        }
    }
}

int main()
{
    int r1, c1, r2, c2, first[10][10], second[10][10], result[10][10];
    printf("Enter the no of rows and column for Matrix A\n");
    scanf("%d %d", &r1, &c1);
    printf("Enter the no of rows and column for Matrix B\n");
    scanf(" %d %d", &r2, &c2);
    while (c1 != r2)
    {
        printf("Error! Enter the no of rows and colums once again.! ");
        printf("Enter the no of rows and column for Matrix A\n");
        scanf("%d %d", &r1, &c1);
        printf("Enter the no of rows and column for Matrix B\n");
        scanf(" %d %d", &r2, &c2);
    }

    Get_Matrix(first, r1, c1);
    Get_Matrix(second, r2, c2);
    Get_Multiply_Matrix_first_and_second(first, second, result, r1, c1, r2, c2);
    Display(result,r1,c2);
    return 0;
}
