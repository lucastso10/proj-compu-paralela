#include <stdio.h>
#include <string.h>

void inserir_c(char str[], char c, int posicao) {
  int tam = strlen(str);
  
  if (posicao > tam) {
    printf("Posicao invalida! A string tem tamanho %d.\n", tam);
    return;
  }
  
  for (int i = tam; i >= posicao; i--) {
    str[i+1] = str[i];
  }
  
  str[posicao] = c;
}

int main() {
  char str[100] = "Hey hey!";
  int posicao = 6;
  char c = '~';

  printf("Antes: %s\n", str);

  inserir_c(str, c, posicao);

  printf("Depois: %s\n", str);

  return 0;
}