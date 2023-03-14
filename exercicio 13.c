#include <stdio.h>
#include <string.h>

void remover_caractere(char str[], int posicao) {
  int tam = strlen(str);

  if (posicao >= tam) {
    printf(" A string tem tamanho %d.\n", tam);
    return;
  }

  for (int i = posicao; i < tam; i++) {
    str[i] = str[i+1];
  }
}

int main() {
  char str[100] = "Hey! Hey!";
  int posicao = 8;
  printf("Antes: %s\n", str);

  remover_caractere(str, posicao);

  printf("Depois: %s\n", str);

  return 0;
}