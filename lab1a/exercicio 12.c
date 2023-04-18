#include <stdio.h>
#include <string.h>

int main(void){
  int i;
  char str[100] = "Hello world!";
  char find = 'r';

  for (i = 0; i < strlen(str); i++){
    if (str[i] == find)
      printf("O caracter %c foi encontrado na posição %d da string!\n", find, i);
  }

  printf("%c não foi encontrado mais!\n", find);
  return 0;
}