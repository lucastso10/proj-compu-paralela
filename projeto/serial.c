#include <gmp.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	int precisao, casas = 100000, i;

	mpf_t n, div, e;

	precisao = atoi(argv[1]);
	
	// define o tamanho máximo dos floats
	mpf_set_default_prec(332193);

        // inicializa os floats
	mpf_init_set_d(n, 1.0);
        mpf_init_set_d(e, 1.0);
	mpf_init(div);


	for(i = 1; i < precisao; i++){
		mpf_mul_ui(n, n, i);
		mpf_ui_div(div, 1, n);
		mpf_add(e, e, div);
	}

        // printa o float
	gmp_printf("e = %.*Ff \n", casas, e);

        // libera a memoria
        mpf_clear(n);
        mpf_clear(e);

        return 0;
}
