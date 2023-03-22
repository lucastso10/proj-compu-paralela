#include <stdio.h>

void printMatriz1(int m[3][5], int linhas, int colunas){
  int i, z;
  for (i = 0; i < linhas; i++){
    printf("|");
    for (z = 0; z < colunas; z++){
      printf(" %d |", m[i][z]);
    }
    printf("\n");
  }
}

void printMatriz2(int m[5][3], int linhas, int colunas){
  int i, z;
  for (i = 0; i < linhas; i++){
    printf("|");
    for (z = 0; z < colunas; z++){
      printf(" %d |", m[i][z]);
    }
    printf("\n");
  }
}

int main(void){
  int i, z;
  int m1[3][5] = {{6,7,8,9,10},{1,2,3,4,5},{11,12,13,14,15}};
  int linha1 = 3, coluna1 = 5;

  int m2[coluna1][linha1];
  int linha2 = coluna1, coluna2 = linha1;

  printMatriz1(m1, linha1, coluna1);
  printf("\n");

  for(i = 0; i < linha1; i++){
    for(z = 0; z < coluna1; z++){
      m2[z][i] = m1[i][z];
    }
  }
  printMatriz2(m2, linha2, coluna2);

  return 0;
}