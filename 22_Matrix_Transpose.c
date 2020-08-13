#include <stdio.h>

int main()
{
  int i, j, m, n, matrix[10][10], transpose[10][10];

  printf("Enter the number of rows and columns in  matrix\n");
  scanf("%d%d", &m, &n);

  printf("Enter elements of the matrix\n");

  for (i = 0; i < m; i++)
    for (j = 0; j < n; j++)
      scanf("%d", &matrix[i][j]);

  printf("Transpose of the matrix:\n");

  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++)
      printf("%d ", transpose[i][j]);
    printf("\n");
  }

  return 0;
}
