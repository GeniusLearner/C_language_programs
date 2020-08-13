#include <stdio.h>

int main() 

{
    int m, n, i, j, matrix_1[100][100], matrix_2[100][100], sum[100][100];
    printf("Enter the number of rows and columns ");
    scanf("%d%d", &m&n);

    printf("\nEnter elements of matrix_1:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++) {
            scanf("%d", &amatrix_1[i][j]);
        }

    printf("Enter elements of matrix_2:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix_2[i][j]);
        }

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++) {
            sum[i][j] = matrix_1[i][j] + matrix_2[i][j];
        }

    printf("\nSum of two matrices: \n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++) {
            printf("%d ", sum[i][j]);
        }

    return 0;
}
