// Minimal Line Cover
// Noah Mulvaney
// 7 Feb 2024

#include "stdio.h"
#include "stdlib.h"

#define DIM_MAX 10
#define STR_MAX 10

void print_matrix(int matrix[DIM_MAX][DIM_MAX], int rows, int cols);

int main() {
  int matrix[DIM_MAX][DIM_MAX];
  int row_cover[DIM_MAX];
  int col_cover[DIM_MAX];
  int cover_matrix[DIM_MAX][DIM_MAX];

  char buffer[STR_MAX];

  printf("Enter number of rows: ");
  fgets(buffer, STR_MAX, stdin);
  const int num_rows = atoi(buffer);

  printf("Enter number of columns: ");
  fgets(buffer, STR_MAX, stdin);
  const int num_cols = atoi(buffer);

  for (int i = 0; i < num_rows && i < DIM_MAX; ++i) {
    for (int j = 0; j < num_cols && j < DIM_MAX; ++j) {
      printf("Enter value for row %d, column %d: ", i + 1, j + 1);
      fgets(buffer, STR_MAX, stdin);
      matrix[i][j] = atoi(buffer);
    }
  }

  print_matrix(matrix, num_rows, num_cols);

  return 0;
}

void print_matrix(int matrix[DIM_MAX][DIM_MAX], int rows, int cols) {
  for (int i = 0; i < rows && i < DIM_MAX; ++i) {
    for (int j = 0; j < cols && j < DIM_MAX; ++j) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
}