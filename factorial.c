# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/wait.h>

int main()
{
  int i = 1, num, j, n1, n2, status;
  printf ("Enter the number: ");
  scanf ("%d", &num);
  j = num/2;
  pid_t pid;

  pid = fork();

  if (pid == 0){
    while (1){
      pid = fork();
      if (pid == 0){
        if(i == j){
          return i;
        }else if(i+1 == j){
           printf("esquerda resolução i: %d , j: %d, num: %d\n", i, j, num);
          return i*j;
        }else{
          num = j;
          j = j/2;
          printf("esquerda i: %d , j: %d, num: %d\n", i, j, num);
          continue;
        }
      }
      pid = wait(&status);
      n1 = WEXITSTATUS(status);
      printf("n1: %d\n", n1);
      pid = fork();
      if (pid == 0){
        j++;
        if(j == num){
          return j;
        }else if(j+1 == num){
          printf("direita res i: %d , j: %d, num: %d\n", i, j, num);
          return j*num;
        }else{
          i = j;
          j = (j+num)/2;
          printf("direita i: %d , j: %d, num: %d\n", i, j, num);
          continue;
        }
      }
      pid = wait(&status);
      n2 = WEXITSTATUS(status);
      printf("n2: %d\n", n2);

      int result = n1*n2;

      printf("n1*n2 = %d\n", result);

      return result;
    }
  }
  pid = wait(&status);
  n1 = WEXITSTATUS(status); 

  printf("O fatorial de %d é %d e %d\n", num, n1, n2);
}

/*
int status
    pid = wait(&status);
    child_result = WEXITSTATUS(status);
*/
