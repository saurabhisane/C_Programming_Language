#include <stdio.h>

int main()
{
    int row, column, Matrix_a[100][100], Matrix_b[100][100], sum[100][100];
    printf("Enter the no of rows := ");
    scanf("%d", &row );
    printf("Enter the no of columns := ");
    scanf("%d", &column );
    printf("\nEnter the Elements in the matrix a .\n");

    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
        {
            printf("Enter the Element a%d%d := ", i + 1, j + 1);
            scanf("%d", &Matrix_a[i][j]);
        }

    printf("\nEnter the Elements in the matrix b.\n");

    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
        {
            printf("Enter the Element a%d%d := ", i + 1, j + 1);
            scanf("%d", &Matrix_b[i][j]);
        }

    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
        {
            sum[i][j] = Matrix_a[i][j] + Matrix_b[i][j];
        }

    printf("\nThe Sum of Two Matrices..\n");
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
        {
            printf("%2d", sum[i][j]);
            if (j == column - 1)
            {
                printf("\n");
            }
        }

    return 0;
}
