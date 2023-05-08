#include <stdio.h>
#include <gmp.h>
#include <stdlib.h>
#include <omp.h>

int main(int argc, char* argv[]) {
	mpf_t n, e, temp;

        int i, precisao, casas = 10000;

	precisao = atoi(argv[1]);

        // inicializa os floats
        mpf_set_default_prec(100000);
        mpf_init(temp);
	mpf_init_set_d(n, 1.0);
        mpf_init_set_d(e, 1.0);

        // loop para calcular o valor de e.
        for(i = 0; i < precisao; i++){
                mpf_mul_ui(n, n, i+1); // calcula o fatorial para esse loop
                mpf_ui_div(temp, 1, n); // divide 1 por n (fatorial) e guarda em temp
                mpf_add(e, temp, e); // soma o temp para e, o resultado
        }

        // printa o float
	gmp_printf("e = %.*Ff \n", casas, e);

        // libera a memoria
        mpf_clear(n);
        mpf_clear(e);
        mpf_clear(temp);

        return 0;
}
