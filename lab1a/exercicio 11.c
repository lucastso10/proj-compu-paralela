#include <stdio.h>
#define lin 4
#define col 4

void somar_linhas(int m[][col], int l1, int l2) {
  for (int j = 0; j < col; j++) {
    m[l2][j] += m[l1][j];
  }
}

void imprimir_matriz(int m[][col]) {
  for (int i = 0; i < lin; i++) {
    for (int j = 0; j < col; j++) {
      printf("%d ", m[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int m[lin][col] = {{0, 1, 2, 3}, {4, 5, 6, 6}, {7, 8, 9, 0}};

  printf("\nMatriz original:\n\n");
  imprimir_matriz(m);
  somar_linhas(m, 0, 1);
  printf("\n\n\nMatriz resultante da soma L1 e L2 (resultado em L2):\n\n");
  imprimir_matriz(m);

  return 0;
}