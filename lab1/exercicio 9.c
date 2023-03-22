#include <stdio.h>

void printMatriz(int m[3][5], int linhas, int colunas){
  int i, z;
  for (i = 0; i < linhas; i++){
    printf("|");
    for (z = 0; z < colunas; z++){
      printf(" %d |", m[i][z]);
    }
    printf("\n");
  }
}

void moduloMatriz(int m[3][5], int linhas, int colunas){
  int i, z;
  for (i = 0; i < linhas; i++){
    for (z = 0; z < colunas; z++){
      if(m[i][z] < 0)
        m[i][z] *= -1;
    }
  }
}

int main(void){
  int m[3][5] = {{6,7,8,-9,10},{1,2,3,-4,5},{11,-12,-13,14,15}};
  int linhas = 3, colunas = 5;

  printf("Antes: \n");
  printMatriz(m, linhas, colunas);

  moduloMatriz(m, linhas, colunas);


  printf("Depois: \n");
  printMatriz(m, linhas, colunas);
  
  return 0;
}