/* Program to transpose a matrix */

#include <stdio.h>
#include <conio.h>

#define ROW 3
#define COL 4

int main()
{
    int mat[ROW][COL], transpose[COL][ROW], i, j;

    printf("Enter the matrix(%dx%d) row-wise: \n", ROW, COL);

    for (i = 0; i < ROW; i++)
        for (j = 0; j < COL; j++)
            scanf("%d", &mat[i][j]);

    /* Transpose */
    for (i = 0; i < COL; i++)
        for (j = 0; j < ROW; j++)
            transpose[i][j] = mat[j][i];

    printf("Transpose of matrix is: \n", ROW, COL);
    for (i = 0; i < COL; i++)
    {

        for (j = 0; j < ROW; j++)
            printf("%5d", transpose[i][j]);

        printf("\n");
    }

    getch();
    return (0);
}