#include <stdio.h>
#include <gmp.h>

mpf_t n, e, temp, c;
mpz_t calc;

void fat(int quant){
  mpz_mul_ui(calc, calc, quant+1);
}

int main(void) {
  int i;

  mpf_set_default_prec(10000);
  mpf_init(e);
  mpf_init(n);
  mpf_init(temp);
  mpf_init(c);
  mpf_set_d(e, 1.0);
  mpf_set_d(c, 1.0);
  mpz_init_set_ui(calc, 1);
 
  for(i = 0; i < 1000; i++){
    fat(i);
    mpf_set_z(n, calc);
    mpf_div(temp, c, n);
    mpf_add(e, e, temp);
  }

  printf ("a!  =  ");
  mpf_out_str(NULL, 10, 10000, e);
  mpf_clear(n);
  mpf_clear(e);
  printf("\n");
  
  return 0;
}
