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

void transposta(int m1[3][5], int linhas1, int colunas1){
  int i, z;
  int m2[colunas1][linhas1];
  int linhas2 = colunas1, colunas2 = linhas1;
  for(i = 0; i < linhas1; i++){
    for(z = 0; z < colunas1; z++){
      m2[z][i] = m1[i][z];
    }
  }
  printMatriz2(m2, linhas2, colunas2);
}

int main(void){
  int m1[3][5] = {{6,7,8,9,10},{1,2,3,4,5},{11,12,13,14,15}};
  int linhas1 = 3, colunas1 = 5;

  printMatriz1(m1, linhas1, colunas1);
  printf("\n");


  return 0;
}