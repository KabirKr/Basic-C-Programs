/* Program to add two matrices */

#include <stdio.h>
#include <conio.h>

#define ROW 3
#define COL 4

int main()
{
    int matrix_1[ROW][COL], matrix_2[ROW][COL], resultant_matrix[ROW][COL], i, j;

    /* User input */
    printf("Enter first matrix(%dx%d) row-wise :\n", ROW, COL);
    for (i = 0; i < ROW; i++)
        for (j = 0; j < COL; j++)
            scanf("%d", &matrix_1[i][j]);

    printf("Enter second matrix(%dx%d) row-wise :\n", ROW, COL);
    for (i = 0; i < ROW; i++)
        for (j = 0; j < COL; j++)
            scanf("%d", &matrix_2[i][j]);

    /* Addition */
    for (i = 0; i < ROW; i++)
        for (j = 0; j < COL; j++)
            resultant_matrix[i][j] = matrix_1[i][j] + matrix_2[i][j];

    /* Output */
    printf("The resultant matrix result_matrix is :\n");
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
            printf("%5d", resultant_matrix[i][j]);

        printf("\n");
    }

    getch();
    return 0;
}
