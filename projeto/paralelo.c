#include <gmp.h>
#include <stdlib.h>
#include <omp.h>

int main(int argc, char* argv[]) {
        int precisao, casas = 100000, i;

	mpf_t n, e;

	precisao = atoi(argv[1]);
	
	// define o tamanho máximo dos floats
        mpf_set_default_prec(100000);

        // inicializa os floats
	mpf_init_set_d(n, 1.0);
        mpf_init_set_d(e, 1.0);

        // loop para calcular o valor de e.
	mpf_div_ui(n, n, precisao);
	mpf_add_ui(n, n, 1);

	#pragma omp parallel for
	for(i = 0; i < precisao; i++){
		mpf_mul(e, e, n);
	}

        // printa o float
	gmp_printf("e = %.*Ff \n", casas, e);

        // libera a memoria
        mpf_clear(n);
        mpf_clear(e);

        return 0;
}
