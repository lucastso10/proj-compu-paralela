#include <gmp.h>
#include <stdlib.h>
#include <omp.h>
#include <math.h>

int main(int argc, char* argv[]) {
        int precisao, i, casas = 100000;

	mpf_t n, div, e;

	precisao = atoi(argv[1]);

	omp_set_nested(1);

	// define o tamanho máximo dos floats
        mpf_set_default_prec(332193);

        // inicializa os floats
	mpf_init_set_d(n, 1.0);
        mpf_init_set_d(e, 1.0);
	mpf_init(div);

	#pragma omp for
	for(i = 1; i < precisao; i++){
                mpf_mul_ui(n, n, i); // calcula o fatorial para esse loop
		#pragma omp parallel
		{
               	mpf_ui_div(div, 1, n); // divide 1 por n (fatorial) e guarda em divt
        	mpf_add(e, div, e); // soma o div com e.
		}
        }

        // printa o float
	gmp_printf("e = %.*Ff \n",casas ,e);

        // libera a memoria
        mpf_clear(n);
	mpf_clear(div);
        mpf_clear(e);

        return 0;
}
