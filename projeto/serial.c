#include <stdio.h>
#include <stdlib.h>
#include <mpfr.h>

int main(int argc, char* argv[]) {
	mpfr_t n, e, temp;

        int precisao, casas = 30000, i;

	precisao = atoi(argv[1]);
	
	// define o tamanho máximo dos floats
        mpfr_set_default_prec(100000);

        // inicializa os floats
        mpfr_init(temp);
	mpfr_init_set_d(n, 1.0, MPFR_RNDN);
        mpfr_init_set_d(e, 1.0, MPFR_RNDN);

        // loop para calcular o valor de e.
        for(i = 0; i < precisao; i++){
                mpfr_mul_ui(n, n, i+1, MPFR_RNDF); // calcula o fatorial para esse loop
                mpfr_ui_div(temp, 1, n, MPFR_RNDF); // divide 1 por n (fatorial) e guarda em temp
                mpfr_add(e, temp, e, MPFR_RNDF); // soma o temp para e, o resultado
        }

        // printa o float
	mpfr_out_str(stdout, 10, 30000, e, MPFR_RNDF);

        // libera a memoria
        mpfr_clear(n);
        mpfr_clear(e);
        mpfr_clear(temp);

        return 0;
}
