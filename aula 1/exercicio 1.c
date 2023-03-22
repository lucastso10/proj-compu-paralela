#include <stdio.h>

// função para printar matriz
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

int main(void){
  // declarando a matriz
  int m[3][5] = {{6,7,8,9,10},{1,2,3,4,5},{11,12,13,14,15}};
  int i, z, linhas = 3, colunas = 5, min = m[0][0], linhaF = 0;

  // printando a matriz que vai ser utilizada
  printf("\nMatriz utilizada:\n");
  printMatriz(m, linhas, colunas);

  // percorrendo a matriz número por número pra deteminar onde está o menor elemento dela
  for (i = 0; i < linhas; i++){
    for (z = 0; z < colunas; z++){
      if (m[i][z] < min){
        min = m[i][z];
        linhaF = i;
      }  
    }
  }
  
  printf("\n A linha com o menor componente é a %d\n\n",linhaF+1);
  
  return 0;
}