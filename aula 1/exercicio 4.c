#include <stdio.h>

// função que compara duas strings e retorna a maior delas
int stringComp(char* a, char *b, int size){
  for(int i = 0; i < size; i++){
    if(tolower(a[i]) < tolower(b[i]))
      return 0;
    else if (tolower(a[i]) > tolower(b[i]))
      return 1;
  }
  return 0; // se não retornar no for então as strings são iguas e a gente retorna qualquer uma
}

int main(void){
  int limite = 20;
  char n1[limite];
  char n2[limite];
  printf("\nDigite dois nomes(o limite de caracter é 20)");
  printf("\nDigite o primeiro nome: ");
  scanf("%s", n1);
  printf("\nDigite o segundo nome: ");
  scanf("%s", n2);

  if (stringComp(n1,n2,limite) == 0)
    printf("%s\n%s\n", n1,n2);
  else
    printf("%s\n%s\n", n2,n1);

  return 0;
}