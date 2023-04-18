#include <stdio.h>

int main(void){
  int tamanho = 0, i, z;
  
  while (tamanho % 2 != 1){
    printf("\nPorfavor digite um número ímpar: ");
    scanf("%d", &tamanho);
  }

  int quantLinha = ((tamanho - 1) / 2) + 1;
  
  for (i = 0; i < quantLinha; i++){
    printf("\n");
    for (z = 1; z <= tamanho; z++){
      if (!(z <= i) && !(z > tamanho - i))
        printf("%d ", z);
      else
        printf("  ");
    }
  }
  
  printf("\n\n");
  return 0;
}