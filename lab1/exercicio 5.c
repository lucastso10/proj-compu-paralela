#include <stdio.h>

// limite para o tamanho de linhas e colunas da matriz
#define SIZE 100

void printMatriz(int m[SIZE][SIZE], int linhas, int colunas){
  int i, z;
  for (i = 0; i < linhas; i++){
    printf("|");
    for (z = 0; z < colunas; z++){
      printf(" %d |", m[i][z]);
    }
    printf("\n");
  }
}

void multLinha(int m[SIZE][SIZE], int linhas, int colunas){
  int linha, n, i;
  printf("Qual linha você deseja multiplicar?: ");
  scanf("%d",&linha);
  if (linha > linhas || linha < 0){
    printf("\nErro! A matriz não possui essa linha!");
    return;
  }
  printf("Por qual número?: ");
  scanf("%d",&n);

  for(i = 0; i < colunas; i++){
    m[linha][i] *= n;
  }

  printMatriz(m, linhas, colunas);
      
}

void multColu(int m[SIZE][SIZE], int linhas, int colunas){
  int coluna, n, i;
  printf("Qual linha você deseja multiplicar?: ");
  scanf("%d",&coluna);
  if (coluna > colunas || coluna < 0){
    printf("\nErro! A matriz não possui essa linha!");
    return;
  }
  printf("Por qual número?: ");
  scanf("%d",&n);

  for(i = 0; i < linhas; i++){
    m[i][coluna] *= n;
  }

  printMatriz(m, linhas, colunas);
      
}

int main(void){
  int m[SIZE][SIZE];
  int linhas, colunas, i, z, option = -1;
  printf("Digite a quantidade de linhas da matriz: ");
  scanf("%d", &linhas);
  printf("Digite a quantidade de colunas da matriz: ");
  scanf("%d", &colunas);

  for(i = 0; i < linhas; i++){
    for(z = 0; z < colunas; z++){
      printf("Digite o valo da posição [%d][%d] = ", i, z);
      scanf("%d", &m[i][z]);
    }
  }

  printMatriz(m, linhas, colunas);
  
  while (option != 0){
    printf("\nVocê deseja multiplicar uma linha ou coluna?\n");
    printf("[1] Linha\n[2] Coluna\n[0] Sair\n");
    scanf("%d", &option);

    switch (option){
      case 1:
        multLinha(m, linhas, colunas);
        break;
      case 2:
        multColu(m, linhas, colunas);
        break;
    }
    
  }
  
  return 0;
}