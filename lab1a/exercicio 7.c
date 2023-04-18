#include <stdio.h>

typedef struct{
  char Nome[100];
  int Idade;
  float Peso;
  float Altura;
} Pessoa;

int main(void){
  int i;
  Pessoa v[3], temp;
  char str[3][10] = {{"primeira"}, {"segunda"}, {"terceira"}};

  for (i = 0; i < 3; i++){
    printf("Digite o nome da %s pessoa: ", str[i]);
    scanf("%s", temp.Nome);

    printf("Digite a idade da %s pessoa: ", str[i]);
    scanf("%d", &temp.Idade);

    printf("Digite o peso da %s pessoa: ", str[i]);
    scanf("%f", &temp.Peso);

    printf("Digite a altura da %s pessoa: ", str[i]);
    scanf("%f", &temp.Altura);

    v[i] = temp;
    printf("\n");
  }

  for (i = 0; i < 3; i++){
    printf("\nDados da %s pessoa\n", str[i]);
    printf("Nome: %s\n", v[i].Nome);
    printf("Idade: %d\n", v[i].Idade);
    printf("Peso: %2f\n", v[i].Peso);
    printf("Altura: %2f\n", v[i].Altura);
  }
  
  return 0;
}