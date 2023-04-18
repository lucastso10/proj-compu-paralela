#include <stdio.h>
#include <stdlib.h>

#define M 1000
#define N 1000

int A[M][N];
int x[N]; 
int y[M];

int main(void) {
  int i, j;
  // preeche matriz e vetor
  for (i = 0; i < N; i++) {
    for (j = 0; j < M; j++) {
      A[i][j] = 1;
    }
    x[i] = 2;
  }

  for (i = 0; i < N; i++) {
    for (j = 0; j < M; j++) {
      y[i] += A[i][j] * x[i];
    }
  }

  for(i = 0; i < M; i++)
    printf(" %d ",y[i]);
  printf("\n");

  return 0;
}
