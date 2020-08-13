#include <stdio.h>

int main()
{

  int i, j, m, n, matrix_1[10][10], matrix_2[10][10], sum[10][10];

  printf("Enter the number of rows and columns in  matrix_1\n");
  scanf("%d%d", &m, &n);

  printf("Enter elements of the matrix_1\n");
  for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
      scanf("%d", &matrix_1[i][j]);}}

  printf("Enter the number of rows and columns in matrix_2\n");
  scanf("%d%d", &m, &n);

  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            scanf("%d", &matrix_2[i][j]);}}

  for (i = 0; i < m; i++)
  	for (j = 0; j < n; j++)
            sum[i][j] = matrix_1[i][j] + matrix_2[i][j];

   printf("\nSum of two matrices: \n");
   for (i = 0; i < m; ++i){
       for (j = 0; j < n; j++){
	printf("%d  ", sum[i][j]);
       }
	printf("\n");
       }

   return 0;
}
