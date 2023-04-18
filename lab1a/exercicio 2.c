#include <stdio.h>

int main(void){
  float nota1 = 6, nota2 = 8, nota3 = 7, ME = 7;
  
  float MA = (nota1 + (nota2*2) + (nota3*3) + ME) / 7;
  printf("\nMedia de aproveitamento: %f\n\n", MA);

  printf("Nota: ");
  if (MA >= 9)
    printf("A\n\n");
  else if (MA >= 7.5 && MA < 9)
    printf("B\n\n");
  else if (MA >= 6 && MA < 7.5)
    printf("C\n\n");
  else if (MA >= 4 && MA < 6)
    printf("D\n\n");
  else if (MA < 4)
    printf("E\n\n");
  return 0;
}